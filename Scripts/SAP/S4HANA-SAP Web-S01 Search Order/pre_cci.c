# 1 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap web-s01 search order\\\\combined_S4HANA-SAP Web-S01 Search Order.c"
# 1 "globals.h" 1



 
 
# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 







int   lr_cyberark_get_vault(char * first_param, ...);
int   lr_cyberark_get_vault_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 6 "globals.h" 2

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1



 
const char * const body_variable_1 = "Body={\"__metadata\":{\"id\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='sap.ushell.services.UserRecents',category='U')\",\"uri\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='sap.ushell.services.UserRecents',category='U')\",\"type\":\"INTEROP.PersContainer\"},\"id\":\"sap.ushell.services.UserRecents\",\"category\":\"U\",\"validity\":0,\"clientExpirationTime\":\"\\/Date(253373472000000)\\/\",\"component\":\"\",\"appName\":\"\",\"PersContainerItems\":[{\"value\":\"{\\\"recentDay\\\":\\\"2025/5/9\\\",\\\"recentUsageArray\\\":[{\\\"oItem\\\":{\\\"title\\\":\\\"Display Sales Orders - VA03\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-display?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesDocument-display\\\",\\\"timestamp\\\":1746768333404,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746768333404,\\\"aUsageArray\\\":[2,0,0,1,0,0,1,4,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,7,1,2],\\\"iCount"
		"\\\":20},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"VA03\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"VA03\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746767595105,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746767595105,\\\"aUsageArray\\\":[1],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va03\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\"
		"\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"va03\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746737350545,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746737350545,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,2,0],\\\"iCount\\\":11,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Order\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Order\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\"
		"\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746641198944,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746641198944,\\\"aUsageArray\\\":[5,0,0],\\\"iCount\\\":5,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Outbound Delivery - With Order Reference\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-createInWebGUI\\\",\\\"timestamp\\\":1746641034498,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746641034498,\\\"aUsageArray\\\":[6,1,0,0,0,1,0,0,0,1,0,3,3,0,2,0,0,0,1,0,0,5,8,0,0,0,5,5,0,0],\\\"iCount\\\":41,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrderItem-analyzeItemChanges?EvaluationId=.E.1541571104021\\\",\\\"appId\\\":\\\"#PurchaseOrderItem-analyzeItemChanges\\\",\\\"timestamp\\\":1746641017123,\\\"ic"
		"on\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746641017123,\\\"aUsageArray\\\":[1,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-ssb_Backorders?EvaluationId=.E.1478697190095\\\",\\\"appId\\\":\\\"#SalesOrder-ssb_Backorders\\\",\\\"timestamp\\\":1746640955587,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746640955587,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Sales Order Items - Due for Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createForSOItemsInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-createForSOItemsInWebGUI\\\",\\\"timestamp\\\":1746640913609,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746640913609,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,1,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Order\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"/nva03\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746640898683,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746640898683,\\\"aUsageArray\\\":[2,0,0],\\\"iCount\\\":2,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vf01\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\"
		"\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vf01\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746622233113,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746622233113,\\\"aUsageArray\\\":[12,2,0,0,0,2,0,0,0,2,0,4,6,0,4,0,0,0,2,0,0,0,12,0,0,0,11,4,0,0],\\\"iCount\\\":61,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Billing Documents - VF01\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-createBillingDocuments?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BillingDocument-createBillingDocuments\\\",\\\"timestamp\\\":1746616541926,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746616541926,\\\"aUsageArray\\\":[6,1,0,0,0,1,0,0,0,1,0,2,3,0,2,0,0,0,1,0,0,0,6,0,0,0,8,2,0,0],\\\"iC"
		"ount\\\":33,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vl02n\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl02n\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746616522923,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746616522923,\\\"aUsageArray\\\":[12,2,0,0,0,2,0,0,0,2,0,5,6,0,4,0,0,0,2,0,0,0,13,0,0,0,9,7,0,0],\\\"iCount\\\":64,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-changeInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId"
		"\\\":\\\"#OutboundDelivery-changeInWebGUI\\\",\\\"timestamp\\\":1746616494946,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746616494946,\\\"aUsageArray\\\":[6,1,0,0,0,1,0,0,0,1,0,3,3,0,2,0,0,0,1,0,0,0,7,0,0,0,5,4,0,0],\\\"iCount\\\":34,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vl01n\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl01n\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746616475984,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746616475984,\\\"aUsageArray\\\":[12,2,0,0,0,2,0,0,0,2,0,6,6,0,4,0,0,0,2,0,0,8,1"
		"6,0,0,0,10,8,0,0],\\\"iCount\\\":78,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"VA01\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"VA01\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746616433164,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746616433164,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,2,0,0],\\\"iCount\\\":12,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Orders - VA01\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-create?sap-ui-tech-hint=GUI\\"
		"\",\\\"appId\\\":\\\"#SalesDocument-create\\\",\\\"timestamp\\\":1746616375342,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746616375342,\\\"aUsageArray\\\":[8,3,1,1,1,1,0,0,0,1,1,4,3,0,2,11,2,2,2,1,0,3,8,2,1,0,7,4,0,0],\\\"iCount\\\":69,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va01\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"va01\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746613708084,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746613708084,\\\"aUsageArray\\\":[16,2,1,2,0,2,0,0,0,2,1,7,6,0,4,11,2,2,3,1,0,6,"
		"16,2,0,0,2,6,0,0],\\\"iCount\\\":94,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Track Sales Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-trackStatus\\\",\\\"appId\\\":\\\"#SalesOrder-trackStatus\\\",\\\"timestamp\\\":1745617204753,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1745617204753,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Sales Orders - VA02\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-change?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesDocument-change\\\",\\\"timestamp\\\":1744892110172,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1744892110172,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va02\\\",\\\"url"
		"\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"va02\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1744892105211,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1744892105211,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Outbound Delivery - Without Order Reference\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createNoReferenceInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-createNoReferenceInWebGUI\\\",\\\"timestamp\\\":1744727454068,\\\"icon\\\":\\\"sap-icon://prod"
		"uct\\\"},\\\"iTimestamp\\\":1744727454068,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manageV2\\\",\\\"appId\\\":\\\"#SalesOrder-manageV2\\\",\\\"timestamp\\\":1744623134154,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1744623134154,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"post incoming payments\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"post incoming paymen"
		"ts\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1740152726160,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1740152726160,\\\"aUsageArray\\\":[4,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":6,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Post Incoming Payments - For Customers\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-postIncomingPayment?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Customer-postIncomingPayment\\\",\\\"timestamp\\\":1740152632570,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1740152632570,\\\"aUsageArray\\\":[2,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":3,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Invoice Lists\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InvoiceList-display?sap-ui-tech-hint=GUI\\\",\\\"app"
		"Id\\\":\\\"#InvoiceList-display\\\",\\\"timestamp\\\":1739230510473,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1739230510473,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vl01n\\\",\\\"url\\\":\\\"#Action-search&/top=10&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"All\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"All\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"All\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl01n\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1738907766361,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1738907766361,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\"
		"\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Outbound Deliveries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createFromDueList\\\",\\\"appId\\\":\\\"#OutboundDelivery-createFromDueList\\\",\\\"timestamp\\\":1736442872016,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1736442872016,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbound Delivery Monitor\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InboundDelivery-monitoringInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#InboundDelivery-monitoringInWebGUI\\\",\\\"timestamp\\\":1735570193686,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1735570193686,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders\\\",\\\"appType\\\":\\\"A"
		"pplication\\\",\\\"url\\\":\\\"#SalesOrder-manage&/?sap-iapp-state--history=TASH9MYI98H9N4IQB5FTVYWLYALUE29HILEP61G0S&sap-iapp-state=TASWIATNWDTHS7831G5GS29P39G3O71S44YLX7M6P\\\",\\\"appId\\\":\\\"#SalesOrder-manage\\\",\\\"timestamp\\\":1734617772842,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1734617772842,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Analyze Delivery Logs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-analyseProcessingLogs?CollectiveProcessing=91026&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#OutboundDelivery-analyseProcessingLogs\\\",\\\"timestamp\\\":1734617713304,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1734617713304,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Applica"
		"tion\\\",\\\"url\\\":\\\"#DeliveryApplicationJob-scheduleOutbDlvCreation?JobCatalogEntryName=SAP_LCM_LE_RVV50R10A%2C%20SAP_LCM_LE_RVV50R10C_J002&sap-ach=LE-SHP-GF-JS&sap-app-origin-hint=&sap-fiori-id=F2228&/v4_JobRunCreate\\\",\\\"appId\\\":\\\"#DeliveryApplicationJob-scheduleOutbDlvCreation\\\",\\\"timestamp\\\":1734617693704,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1734617693704,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va001\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"va001\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\"
		"\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1734533136795,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1734533136795,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vl02\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl02\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1733413616754,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1733413616754,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"*\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"*\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1733152900227,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1733152900227,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-create\\\",\\"
		"\"appId\\\":\\\"#BillingDocument-create\\\",\\\"timestamp\\\":1729701581222,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1729701581222,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Credit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CreditMemoRequest-display?CreditMemoRequest=60000155&OverallSDProcessStatusDesc=Open&P_DisplayCurrency=USD&SalesOrganization=1710&TotalNetAmount=0.00&TransactionCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASVWP57R15E7S3BQEWCFAR3VOHSUEK1SEVTZXSUS\\\",\\\"appId\\\":\\\"#CreditMemoRequest-display\\\",\\\"timestamp\\\":1712666551699,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712666551699,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Sales Overview\\\",\\\"appType\\\":"
		"\\\"Application\\\",\\\"url\\\":\\\"#InternalSales-displayOverviewPage\\\",\\\"appId\\\":\\\"#InternalSales-displayOverviewPage\\\",\\\"timestamp\\\":1712666536079,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712666536079,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Variant Configuration\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#VariantConfiguration-configureLegacy?draftKey=1D3BFE3F2C901EEEBCB28BEAEA6BD916&embeddedInWebGUI=false&objectKey=%20%20%20%20%20%20%20%20%20%20000010&sap-system=sid(S4H.100)&semanticObject=SalesOrder&uiMode=Create\\\",\\\"appId\\\":\\\"#VariantConfiguration-configureLegacy\\\",\\\"timestamp\\\":1712133042121,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712133042121,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Mater"
		"ial\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-change?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Material-change\\\",\\\"timestamp\\\":1712116611057,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712116611057,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"mm02\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"mm02mm02\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1712116607488,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\""
		"iTimestamp\\\":1712116607488,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Review Availability Check Result for SAPGUI\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ATPCheckResult-review?ATPCheckUUID=1D3BFE3F2C901EDEBCAD98808FC3504E&isEmbeddedInSAPGUIForHTML=true\\\",\\\"appId\\\":\\\"#ATPCheckResult-review\\\",\\\"timestamp\\\":1712116005729,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712116005729,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Sales Order - VA03\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-display?%24.basicSearch=&DeliveryBlockReason=&HeaderBillingBlockReason=&PurchaseOrderByCustomer=11223344&RequestedDeliveryDate=2022-11-24T00%3A00%3A00.000Z&SalesOrder=5126&SalesOrderDate=2022-11-24T00%3A00%3A00.000Z&SalesOrganization"
		"=1710&SoldToParty=USCU_S01&SoldToPartyName=Performance%20Bikes&TotalNetAmount=80000.00&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TASNM28E9A8AZ6CD1D66W3KQVCDS2R3UCVINSGEPV\\\",\\\"appId\\\":\\\"#SalesOrder-display\\\",\\\"timestamp\\\":1712114466579,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712114466579,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoices List\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-list1\\\",\\\"appId\\\":\\\"#SupplierInvoice-list1\\\",\\\"timestamp\\\":1712106693144,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712106693144,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Import Sales Contracts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-import?sap-app-origi"
		"n-hint=\\\",\\\"appId\\\":\\\"#SalesContract-import\\\",\\\"timestamp\\\":1711716800154,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711716800154,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Import Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-import\\\",\\\"appId\\\":\\\"#SalesDocument-import\\\",\\\"timestamp\\\":1711716703074,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711716703074,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Import Sales Quotations\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-import?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesQuotation-import\\\",\\\"timestamp\\\":1711702423463,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711702423463,\\\"aUsageArray"
		"\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Contract - VA43\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-display?SalesContract=40000029&sap-app-origin-hint=&sap-xapp-state=TASDEPUYBU5SIYAFRCMZ8NFDQQILF9DRRBNBWXLZR\\\",\\\"appId\\\":\\\"#SalesContract-display\\\",\\\"timestamp\\\":1711701984560,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711701984560,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Contracts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-manage\\\",\\\"appId\\\":\\\"#SalesContract-manage\\\",\\\"timestamp\\\":1711701136952,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711701136952,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\"
		"\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-manage?sap-app-origin-hint=&sap-xapp-state=TAS36KFLYXQZLNQOX93CTLC9YTEFEG3UO896GB2I4&/object/display/90004947\\\",\\\"appId\\\":\\\"#BillingDocument-manage\\\",\\\"timestamp\\\":1711700753910,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711700753910,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Management Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Sales-displayOverviewPage\\\",\\\"appId\\\":\\\"#Sales-displayOverviewPage\\\",\\\"timestamp\\\":1711659278335,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711659278335,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Overdue Purchase Order Items\\\",\\\""
		"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrderItem-analyzeOverduePurOrdItems?EvaluationId=.SAP.MM.PUR.OVERDUEPO\\\",\\\"appId\\\":\\\"#PurchaseOrderItem-analyzeOverduePurOrdItems\\\",\\\"timestamp\\\":1711658873803,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658873803,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Timesheet Analytics - My Activities\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Employee-analyzeActivities\\\",\\\"appId\\\":\\\"#Employee-analyzeActivities\\\",\\\"timestamp\\\":1711658732393,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658732393,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Team Calendar\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Employee-displayCalendar\\\",\\\"appId\\\":\\\"#Emplo"
		"yee-displayCalendar\\\",\\\"timestamp\\\":1711658720767,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658720767,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Learning\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Employee-startLearning\\\",\\\"appId\\\":\\\"#Employee-startLearning\\\",\\\"timestamp\\\":1711658698821,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658698821,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Search Courses\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Employee-searchCourses\\\",\\\"appId\\\":\\\"#Employee-searchCourses\\\",\\\"timestamp\\\":1711658681301,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658681301,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],"
		"\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Outbound Deliveries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-manage&/?sap-iapp-state--history=TAS366WWJ8DDICYHZ435T7FUNT595XUX1O4FJ6Y5Y&sap-iapp-state=TAST33Z2TP8ZDM2D29SLSCH0LVX22KZ78XM12CFZF\\\",\\\"appId\\\":\\\"#OutboundDelivery-manage\\\",\\\"timestamp\\\":1711655725628,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711655725628,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Pick Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-pick?%23=&sap-app-origin-hint=&/DeliveryHeader'(80003710)'\\\",\\\"appId\\\":\\\"#OutboundDelivery-pick\\\",\\\"timestamp\\\":1711655719146,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711655719146,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount"
		"\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-displayFactSheet?sap-app-origin-hint=&/C_OutboundDeliveryFs('80003712')\\\",\\\"appId\\\":\\\"#OutboundDelivery-displayFactSheet\\\",\\\"timestamp\\\":1711655572313,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711655572313,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Order-to-Cash Performance Monitoring\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OrderToCashPerformanceKPI-displayOverviewPage\\\",\\\"appId\\\":\\\"#OrderToCashPerformanceKPI-displayOverviewPage\\\",\\\"timestamp\\\":1711654941242,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654941242,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\"
		"\"Order-to-Cash Performance - Time Series\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OrderToCashPerformanceKPI-executeAPFConfigurationS4HANATotal?P_NumberOfEvaluationMonths=2&ProcObsvrKPIDefDesc=Orders%20Delivered&YearMonth=202403&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS6SACGERBHFKX75YA65VO95PKFJI2DKCZ1SIY9G\\\",\\\"appId\\\":\\\"#OrderToCashPerformanceKPI-executeAPFConfigurationS4HANATotal\\\",\\\"timestamp\\\":1711654934473,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654934473,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"List Incomplete Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-listIncompleteDocuments?sap-xapp-state=TASVPGH1WN2YLY1I39XNLWVLQMRV1Z3Q91JJ0ET6Q&/?sap-iapp-state--history=TASPM0CH738ML37IL0BGT3Y9DT6DU2XE81UY44WG6&sap-iapp-state=TASXJSSE8DK5ENTS13NKVM6C3RVTDWCUWPL0D8F3Y\\\",\\\"appId"
		"\\\":\\\"#SalesDocument-listIncompleteDocuments\\\",\\\"timestamp\\\":1711654677642,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654677642,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Complete Missing Data\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-incompletionLog?SalesDocument=20000744&sap-app-origin-hint=&sap-xapp-state=TASUTW8GEKBEMRRSXPO1YMDFA49ITL07G9INZJLL1\\\",\\\"appId\\\":\\\"#SalesDocument-incompletionLog\\\",\\\"timestamp\\\":1711654623145,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654623145,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"General Ledger Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#GeneralLedgerOverview-display\\\",\\\"appId\\\":\\\"#GeneralLedgerOverview-display\\\",\\\"timestamp"
		"\\\":1711654474596,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654474596,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Credit Memo Requests - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CreditMemoRequest-manageV2\\\",\\\"appId\\\":\\\"#CreditMemoRequest-manageV2\\\",\\\"timestamp\\\":1711654219908,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654219908,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Incoming Sales Orders - Flexible Analysis\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-analyzeIncoming?P_DisplayCurrency=USD&P_ExchangeRateType=M&P_NumberOfMonths=12&SalesOrganization=1710&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS622BTDI0MEFWL332TM7R76DV4RVFOPYIMBAHPS\\\",\\\"appId\\\":"
		"\\\"#SalesOrder-analyzeIncoming\\\",\\\"timestamp\\\":1711653993634,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711653993634,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"manage text\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"manage text\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1711549107473,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1711549107473,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"manage tax rates \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"manage tax rates \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1711541440712,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1711541440712,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingApplicationJob-scheduleOut"
		"putJobs?JobCatalogEntryName=BILLING_DOCUMENTS_OUTPUT_RUN\\\",\\\"appId\\\":\\\"#BillingApplicationJob-scheduleOutputJobs\\\",\\\"timestamp\\\":1711539927858,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711539927858,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-displayBillingDocument?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BillingDocument-displayBillingDocument\\\",\\\"timestamp\\\":1711487280437,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711487280437,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-editSalesOrderV2?SalesOrder=4622&sap-app-origin-hint=\\\",\\\"appI"
		"d\\\":\\\"#SalesOrder-editSalesOrderV2\\\",\\\"timestamp\\\":1711486447321,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711486447321,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Track Sales Order Details\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manageFulfillment?%24.basicSearch=&FulfillmentProcessPhase=1&FulfillmentStatusInAccounting=0&FulfillmentStatusInDelivery=0&FulfillmentStatusInInvoice=0&FulfillmentStatusInOrder=4&FulfillmentStatusInSupply=0&FulfillmentStatusInTransit=0&OverallFulfillmentStatus=4&OverallSDProcessStatus=A&RequestedDeliveryDate=2021-11-19T00%3A00%3A00.000Z&SalesDocument=4622&SalesDocumentDate=2021-11-19T00%3A00%3A00.000Z&SemanticObject=SalesOrder&SoldToParty=17100001&SoldToPartyFullName=Domestic%20US%20Customer%201&TotalNetAmount=995000.00&TransactionCurrency=USD&preferredMode=display&sap-app-origin-hint=&sap-xapp-state=TASNC7KKT5RC0BGO"
		"2PN2K4ZL0R1P28BYLHV3Y36W4&sap.suite.ui.generic.template.genericData=%5Bobject%20Object%5D&/Fulfillment/SalesDocument/4622/sNextLayout/TwoColumnsMidExpanded\\\",\\\"appId\\\":\\\"#SalesOrder-manageFulfillment\\\",\\\"timestamp\\\":1711486430914,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711486430914,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Sales Order - VA02\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-change?SalesOrder=4622&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-change\\\",\\\"timestamp\\\":1711486076807,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711486076807,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Orders - Actuals\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-analyzeActuals"
		"CDSQ?SalesOrder=4607&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-analyzeActualsCDSQ\\\",\\\"timestamp\\\":1711486041222,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711486041222,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Debit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DebitMemoRequest-change?DebitMemoRequest=70000014&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#DebitMemoRequest-change\\\",\\\"timestamp\\\":1711485883848,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711485883848,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"orders\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\"
		"\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"orders\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1711485180947,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1711485180947,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"orders\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"open orders\\\\\\\",\\\\\\\"rootCondition"
		"\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1711484102478,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1711484102478,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order Fulfillment Issues\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderFulfillmentIssue-analyzeALPDetails?IsPotentialFutureIssue=0&IssueCategory=10_SO&IssueCategoryName=In%20Order&NmbrOfAllIssues=283&P_DisplayCurrency=USD&SalesOrganization=1710&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASUFXV09530I0QG9N7WGKZJOV2W2SN6LCF4LBNAW&/?sap-iapp-state--history=TAS77OWKPMQT79R3PTQKZ4UHX5D3MOQTDDPN208NC\\\",\\\"appId\\\":\\\"#SalesOrderFulfillmentIssue-analyzeALPDetails\\\",\\\"timestamp\\\":1711484000373,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711484000373,\\"
		"\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"[Deprecated] Sales Order Fulfillment\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderFulfillmentIssue-ssb_Analyze?EvaluationId=.ECC.SOFM.SALESORDERFULFILLMENTISSUES.EV\\\",\\\"appId\\\":\\\"#SalesOrderFulfillmentIssue-ssb_Analyze\\\",\\\"timestamp\\\":1711479779321,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711479779321,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Audit Journal\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingJournalList-displayAuditJournal?CompanyCode=1710&GLAccountHierarchy=YPA2&Ledger=0L&NavToPage=JournalEntryHistory&P_DisplayCurrency=USD&P_KeyDate=2024-03-26T00%3A00%3A00.000&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASCC79HS0R2SZ74E81QN48V2CRPHD7BM21WU6"
		"9LS&/JournalEntryHistory\\\",\\\"appId\\\":\\\"#AccountingJournalList-displayAuditJournal\\\",\\\"timestamp\\\":1711479344976,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711479344976,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Set My Location\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#EHSLocation-setMyLoc?sap-ui-tech-hint=WDA\\\",\\\"appId\\\":\\\"#EHSLocation-setMyLoc\\\",\\\"timestamp\\\":1711472190934,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711472190934,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Invoice Lists\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InvoiceList-manage\\\",\\\"appId\\\":\\\"#InvoiceList-manage\\\",\\\"timestamp\\\":1711467681747,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":17114676"
		"81747,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingApplicationJob-scheduleReleaseJobs?JobCatalogEntryName=BILLING_RELEASE_RUN&/v4_JobRunList\\\",\\\"appId\\\":\\\"#BillingApplicationJob-scheduleReleaseJobs\\\",\\\"timestamp\\\":1711457779361,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711457779361,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingApplicationJob-scheduleCreationJobs?JobCatalogEntryName=BILLING_DOCUMENT_RUN\\\",\\\"appId\\\":\\\"#BillingApplicationJob-scheduleCreationJobs\\\",\\\"timestamp\\\":1711456884900,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711456884900,\\\"aUsageArray\\\":[0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Value Chains\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ValueChainInstance-monitor\\\",\\\"appId\\\":\\\"#ValueChainInstance-monitor\\\",\\\"timestamp\\\":1711183454780,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711183454780,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoice\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-display?FiscalYear=2024&SupplierInvoice=5100001350&sap-app-origin-hint=&sap-xapp-state=TASEBGSDBZTZO96J1V647Z8LW8IHL3XM4XXU6KIW2\\\",\\\"appId\\\":\\\"#SupplierInvoice-display\\\",\\\"timestamp\\\":1711181984705,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711181984705,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":"
		"0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Outbound Delivery Monitor\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-monitoringInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-monitoringInWebGUI\\\",\\\"timestamp\\\":1711177912981,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711177912981,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Predicted Delivery Delay\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manageDelay?sap-keep-alive=restricted&sap-xapp-state=TASWOR2PMVEFGUI87ILOPSYO6FLCU567HVF6SOZ8C\\\",\\\"appId\\\":\\\"#SalesOrder-manageDelay\\\",\\\"timestamp\\\":1711176510709,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711176510709,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\"
		"\"Create Sales Order - VA01\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-create\\\",\\\"timestamp\\\":1711174674160,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711174674160,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Product Availability\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-analyzeAvailability?Material=TG-DATP&SupplyingPlant=1710&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#Material-analyzeAvailability\\\",\\\"timestamp\\\":1711044191705,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711044191705,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Complete Missing Data\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-incompletion"
		"Log?SalesOrder=5144&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-incompletionLog\\\",\\\"timestamp\\\":1711044010115,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711044010115,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Journal Entries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocument-manage?AccountingDocument=9400000034&CompanyCode=1710&FiscalYear=2024&sap-app-origin-hint=&/detail/1710/2024/9400000034\\\",\\\"appId\\\":\\\"#AccountingDocument-manage\\\",\\\"timestamp\\\":1711042599149,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711042599149,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Correspondence\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Correspondence-create?params=%7B%22Correspondences%22%"
		"3A%5B%7B%22Id%22%3A%22MJE_Correspondences%22%2C%22DocumentNumber%22%3A%229400000034%22%2C%22CompanyCode%22%3A%221710%22%2C%22FiscalYear%22%3A%222024%22%7D%5D%2C%22Settings%22%3A%7B%22TriggerPreview%22%3Afalse%7D%7D&sap-app-origin-hint=&sap-navigation-scope-filter=F0717&sap-xapp-state=TASRDRU8LXW8DHJBD44HSQAGGALNE7S0VZN3LO6Q3\\\",\\\"appId\\\":\\\"#Correspondence-create\\\",\\\"timestamp\\\":1711042585076,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711042585076,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Multi-Dimensional Web Dynpro Report\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AnalyticQuery-analyze?bsa_query=2CCSDSALESVLMQ&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#AnalyticQuery-analyze\\\",\\\"timestamp\\\":1710952297725,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710952297725,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Query Browser\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AnalyticQuery-browse\\\",\\\"appId\\\":\\\"#AnalyticQuery-browse\\\",\\\"timestamp\\\":1710952231174,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710952231174,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Post Customer Payment\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-postPayment\\\",\\\"appId\\\":\\\"#Customer-postPayment\\\",\\\"timestamp\\\":1710275678455,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710275678455,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Incoming Sales Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-incoming&/?sap-iapp-state--history=T"
		"ASJI21H1CF1F4EKC243K5BL6HQDY22LVM02MKK25&sap-iapp-state=TASLMUZ7NRLSRLNT14JGEVPFIVMRBW0PACNM07AO1\\\",\\\"appId\\\":\\\"#SalesOrder-incoming\\\",\\\"timestamp\\\":1710274789664,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710274789664,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"incom\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"incom\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1710274632437,\\\"icon\\\":\\\"sap-icon://search\\\"},\\"
		"\"iTimestamp\\\":1710274632437,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Post Outgoing Payments\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Supplier-postPayment\\\",\\\"appId\\\":\\\"#Supplier-postPayment\\\",\\\"timestamp\\\":1710271737607,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710271737607,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manageSalesOrderV2?preferredMode=create&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-manageSalesOrderV2\\\",\\\"timestamp\\\":1710168168338,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710168168338,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\"
		"\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Customer Returns\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-manage?P_DisplayCurrency=USD&SalesOrganization=1710&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS6EO2ZRIBTKUE4HU5AGK8R33ZBNRCW37V8PGDKY\\\",\\\"appId\\\":\\\"#CustomerReturn-manage\\\",\\\"timestamp\\\":1710167533675,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710167533675,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Predictive Scenarios\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PredictiveScenario-manage\\\",\\\"appId\\\":\\\"#PredictiveScenario-manage\\\",\\\"timestamp\\\":1709313364423,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1709313364423,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"t"
		"itle\\\":\\\"Manage SA Delivery Schedule\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseSchedulingAgreement-maintainDeliverySchedule?sap-ui-tech-hint=GUI&/?sap-iapp-state=TASDBHZ1AS73WROJF4LEIG9JI4E4LB9LN9GX7LDSR\\\",\\\"appId\\\":\\\"#PurchaseSchedulingAgreement-maintainDeliverySchedule\\\",\\\"timestamp\\\":1709313351879,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1709313351879,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"My Inbox\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"My Inbox\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\"
		"\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1709312713698,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1709312713698,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage SA Delivery Schedule\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Procurement-displayOverviewPage\\\",\\\"appId\\\":\\\"#Procurement-displayOverviewPage\\\",\\\"timestamp\\\":1709312428297,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1709312428297,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage KPIs and Reports\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AnalyticObject-manage\\\",\\\"appId\\\":\\\"#AnalyticObject-manage\\\",\\\"timestamp\\\":1701375727090,\\\"icon\\\":\\\"sap-icon://product\\\"},"
		"\\\"iTimestamp\\\":1701375727090,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage KPIs and Reports\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CDSView-browse\\\",\\\"appId\\\":\\\"#CDSView-browse\\\",\\\"timestamp\\\":1701375716378,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1701375716378,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OrderToCashPerformanceKPI-analyzeSBKPIDetailsS4HANA?EvaluationId=.SAP.POC.O2C.PERF.O2C_1.1\\\",\\\"appId\\\":\\\"#OrderToCashPerformanceKPI-analyzeSBKPIDetailsS4HANA\\\",\\\"timestamp\\\":1700473231240,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700473231240,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Sales Performance\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Sales Performance\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1700473118297,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1700473118297,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Performance - Plan/Actual\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesPlan-analyzeSalesPerfo"
		"rmance\\\",\\\"appId\\\":\\\"#SalesPlan-analyzeSalesPerformance\\\",\\\"timestamp\\\":1700473072540,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700473072540,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Sales Performance - Plan/Actual \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Sales Performance - Plan/Actual \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1700473062889,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":170047"
		"3062889,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Plans\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesPlan-manage\\\",\\\"appId\\\":\\\"#SalesPlan-manage\\\",\\\"timestamp\\\":1700472800086,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700472800086,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Contract - VA41\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesContract-create\\\",\\\"timestamp\\\":1700471402546,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700471402546,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Purchase Orders\\\",\\"
		"\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-manage?PurchaseOrder=4500001811&sap-app-origin-hint=&sap-xapp-state=TASK86IY9WBJE9O513L93800NZQCQX1Z6KZLC5109&/C_PurchaseOrderTP(PurchaseOrder='4500001811',DraftUUID=guid'00000000-0000-0000-0000-000000000000',IsActiveEntity=true)/?sap-iapp-state--history=TASJVX7C22IMSDPC8DYTA9J7HFXQ6TT9RDKPVFTDX&sap-iapp-state-C_PurchaseOrderTP=TASQDBIQDYQPK30V4C67IDPUSQB3LLT1KG739TGKY\\\",\\\"appId\\\":\\\"#PurchaseOrder-manage\\\",\\\"timestamp\\\":1700454369425,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700454369425,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Purchase Order Advanced\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-display?PurchaseOrder=4500001811&sap-app-origin-hint=&sap-xapp-state=TASN52RZ2A2G2N4RRFY24X2CZHB6DVZOH82IN9M1A&uitype=advanced\\\",\\\"appId\\\":\\\"#PurchaseOrder-display\\"
		"\",\\\"timestamp\\\":1700454300613,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700454300613,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"wkm4\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"wkm4\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1700453784312,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1700453784312,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\"
		"\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Process Purchase Requisitions\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-manage?source=lpd\\\",\\\"appId\\\":\\\"#PurchaseRequisition-manage\\\",\\\"timestamp\\\":1700161017764,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700161017764,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoice\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-create\\\",\\\"appId\\\":\\\"#SupplierInvoice-create\\\",\\\"timestamp\\\":1699806904998,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699806904998,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Purchase Requisition\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-displayAdvanced?PurchaseR"
		"equisition=10001441&sap-app-origin-hint=&uitype=advanced\\\",\\\"appId\\\":\\\"#PurchaseRequisition-displayAdvanced\\\",\\\"timestamp\\\":1699806697733,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699806697733,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Purchase Requisitions - Professional\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-maintain?DraftUUID=00000000-0000-0000-0000-000000000000&IsActiveEntity=true&PurchaseRequisition=10001441&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#PurchaseRequisition-maintain\\\",\\\"timestamp\\\":1699806675140,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699806675140,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Credit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\"
		"\":\\\"#CreditMemoRequest-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#CreditMemoRequest-create\\\",\\\"timestamp\\\":1699805519385,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699805519385,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Credit Memo Requests\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CreditMemoRequest-manage\\\",\\\"appId\\\":\\\"#CreditMemoRequest-manage\\\",\\\"timestamp\\\":1699805510014,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699805510014,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Debit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DebitMemoRequest-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#DebitMemoRequest-create\\\",\\\"timestamp\\\":1699804569505,\\\"icon\\\":\\\"sap-"
		"icon://product\\\"},\\\"iTimestamp\\\":1699804569505,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Debit Memo Requests\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DebitMemoRequest-manage\\\",\\\"appId\\\":\\\"#DebitMemoRequest-manage\\\",\\\"timestamp\\\":1699804461061,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699804461061,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"mdg_monitor_cr_procestime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Shell-startWDA?sap-system=LOCAL&sap-ui2-wd-app-id=mdg_monitor_cr_procestime\\\",\\\"appId\\\":\\\"#Shell-startWDA\\\",\\\"timestamp\\\":1699527298643,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699527298643,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"i"
		"Count\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"CMS_WB\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Shell-startGUI?sap-system=LOCAL&sap-ui2-tcode=CMS_WB\\\",\\\"appId\\\":\\\"#Shell-startGUI\\\",\\\"timestamp\\\":1699526905925,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699526905925,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Process Purchase Requisitions - Formerly Manage Purchase Requisitions \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Process Purchase Requisitions - Formerly Manage Purchase Requisitions \\\\\\\",\\\\\\\"rootConditi"
		"on\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1699367433438,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1699367433438,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Quotations\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-manage\\\",\\\"appId\\\":\\\"#SalesQuotation-manage\\\",\\\"timestamp\\\":1699364700461,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699364700461,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Quotations - VA21\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesQuotation-create\\\",\\\"timestamp\\\":1699364364025"
		",\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699364364025,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Customer Return\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-change?%24.basicSearch=&CustReturnRefundStatus=&CustReturnRefundStatusDesc=&Customer=17100003&CustomerReturn=60000217&CustomerReturnDate=2023-11-06T00%3A00%3A00.000Z&CustomerReturnType=KRZU&OvrlReldForSubsqntProcgSts=&OvrlReldForSubsqntProcgStsDesc=Not%20Relevant&ReferenceSDDocument=30000015&ReferenceSDDocumentCategory=F&RetsMgmtCompnProcgStatus=&RetsMgmtIsActive=&ReturnReason=No%20Return%20Reason&SalesDocApprovalStatus=&SalesDocumentTypeName=CsgmtReturnSchedAgr&SalesOrganization=1710&SoldToPartyName=Domestic%20Customer%20US%203&WorkflowIsExternal=false&sap-app-origin-hint=&sap-xapp-state=TAS09NHFR8LVOZPIQJNWAY545FXOOC8WLWY6ZVEMY\\\",\\\"appId\\\":\\\"#CustomerReturn-change\\\",\\\"timest"
		"amp\\\":1699299315724,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699299315724,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Customer Return\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-display?CustomerReturn=200000013&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#CustomerReturn-display\\\",\\\"timestamp\\\":1699298714727,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699298714727,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Scheduling Agreements\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesSchedulingAgreement-create?%24.basicSearch=&SalesOrganization=1710&sap-app-origin-hint=&sap-xapp-state=TASBY1ZPIY24899LX8GZV0S70ZBJQL8IZ78MJ63Q8\\\",\\\"appId\\\":\\\"#SalesSchedulingAgreement-create\\\",\\\"times"
		"tamp\\\":1699295713595,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699295713595,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Scheduling Agreements\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesSchedulingAgreement-manage&/?sap-iapp-state--history=TAS8DNQ89DMQ84LHN2478KLUTAFHYX69THF76PF11\\\",\\\"appId\\\":\\\"#SalesSchedulingAgreement-manage\\\",\\\"timestamp\\\":1699295689225,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699295689225,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Create T*\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"lab"
		"el\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Create T*\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1699264198295,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1699264198295,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Post Goods Movement\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-postGoodsMovementInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Material-postGoodsMovementInWebGUI\\\",\\\"timestamp\\\":1698944824048,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698944824048,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Custome"
		"r Materials\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerMaterialInformation-manage\\\",\\\"appId\\\":\\\"#CustomerMaterialInformation-manage\\\",\\\"timestamp\\\":1698944628340,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698944628340,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Scheduling Agreements - Product Demand\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesSchedulingAgreement-analyzeDemand\\\",\\\"appId\\\":\\\"#SalesSchedulingAgreement-analyzeDemand\\\",\\\"timestamp\\\":1698944418431,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698944418431,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-ssb_Contract_FulfillmentRates"
		"?EvaluationId=.E.1448335534743\\\",\\\"appId\\\":\\\"#SalesContract-ssb_Contract_FulfillmentRates\\\",\\\"timestamp\\\":1698943978178,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698943978178,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-ssb_Quotation_ConversionRates?EvaluationId=.E.1454048205686\\\",\\\"appId\\\":\\\"#SalesQuotation-ssb_Quotation_ConversionRates\\\",\\\"timestamp\\\":1698943949422,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698943949422,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Returns Order\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReturnsOrder-edit?sap-app-origin-hint=&/CustomerReturn/60000211\\\",\\\"appId\\\":\\\"#ReturnsOr"
		"der-edit\\\",\\\"timestamp\\\":1698938500546,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698938500546,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Returns Order from Reference Document\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReturnsOrder-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#ReturnsOrder-create\\\",\\\"timestamp\\\":1698936517124,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698936517124,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Create Billing Documents \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps"
		"\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Create Billing Documents \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698931087380,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698931087380,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Logistics Tracking \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Logistics Tracking \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Comp"
		"lex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698919639168,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698919639168,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"*Search*\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Search\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698909043932,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698909043932,\\\"aUsageArray\\"
		"\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Search\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Search Accounts*\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698909011209,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698909011209,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Ma"
		"nage Customer Returns \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Manage Customer Returns \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698838782630,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698838782630,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#WorkflowTask-displayInbox?allItems=true\\\",\\\"appId\\\":\\\"#WorkflowTask-displayInbox\\\",\\\"timestamp\\\":1698833443555,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1"
		"698833443555,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"my inbox\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"my inbox\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698833439394,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698833439394,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order\\\",\\\"appType\\\":\\\"Applicatio"
		"n\\\",\\\"url\\\":\\\"#SalesOrder-displayFactSheet?sap-app-origin-hint=&/C_Salesorderfs('5496')\\\",\\\"appId\\\":\\\"#SalesOrder-displayFactSheet\\\",\\\"timestamp\\\":1698785658717,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698785658717,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"delivery\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"delivery\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698784657081,\\\"icon\\\":\\\"sap-icon://se"
		"arch\\\"},\\\"iTimestamp\\\":1698784657081,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Manage Sourcing Projects \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Manage Sourcing Projects \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698750279224,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698750279224,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{"
		"\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"mmbe\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"mmbe\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698731148539,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698731148539,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders Without Charge\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderWithoutCharge-manage&/?sap-iapp-state--history=TASDTPB1M99Y4FS49F6MIFLKGPWHENJP82A1UH93K&sap-iapp-stat"
		"e=TAS583H4DDW9OPQC1OT1WP4G4700BXMREU6ADU5G1\\\",\\\"appId\\\":\\\"#SalesOrderWithoutCharge-manage\\\",\\\"timestamp\\\":1698677502360,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698677502360,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Order Without Charge\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderWithoutCharge-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrderWithoutCharge-create\\\",\\\"timestamp\\\":1698677289123,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698677289123,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Debit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DebitMemoRequest-display?%24.basicSearch=&BillingDocumentDate=2023-10-30T00%3A00%3A00.000Z&DebitMemoRequest=70000"
		"027&DebitMemoRequestDate=2023-10-30T00%3A00%3A00.000Z&HeaderBillingBlockReason=Y9&OverallOrdReltdBillgStatus=A&PurchaseOrderByCustomer=Test%20Debit%20Memo%20Request%20(DR)&SalesOrganization=1710&SoldToParty=17100001&SoldToPartyName=Domestic%20US%20Customer%201&TotalNetAmount=35.10&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TASQE1K9HNM040US9B43NDNPU9JWSFSARKEACOZ06\\\",\\\"appId\\\":\\\"#DebitMemoRequest-display\\\",\\\"timestamp\\\":1698672717251,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698672717251,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Stock - Single Material\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-displayStockOverview\\\",\\\"appId\\\":\\\"#Material-displayStockOverview\\\",\\\"timestamp\\\":1698412356559,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698412356559,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Stock\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Stock\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698412343290,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698412343290,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Stock - Multiple Materials\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-displayStockMultipleMat"
		"erials&/?sap-iapp-state--history=TASYD8A1Z1CVV2PUQ0PIG218FZF0YU52DKGZQBGHC\\\",\\\"appId\\\":\\\"#Material-displayStockMultipleMaterials\\\",\\\"timestamp\\\":1698411633891,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698411633891,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Stock \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"mb52\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698411616369,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iT"
		"imestamp\\\":1698411616369,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va01\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl06o\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698411190090,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698411190090,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Customer Return\\\",\\\"appType\\\":\\"
		"\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-displayFactSheet?sap-app-origin-hint=&/C_Customerreturnfs('60000206')\\\",\\\"appId\\\":\\\"#CustomerReturn-displayFactSheet\\\",\\\"timestamp\\\":1698326936188,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698326936188,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Stock - Multiple Materials \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Stock - Multiple Materials \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}"
		"\\\",\\\"timestamp\\\":1698309184068,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698309184068,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Manage Outbound Deliveries - VL06O \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Manage Outbound Deliveries - VL06O \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698308794446,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698308794446,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox - Business Partner Governance\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MDGovWorkflowTask-displayMyInbox\\\",\\\"appId\\\":\\\"#MDGovWorkflowTask-displayMyInbox\\\",\\\"timestamp\\\":1698233527792,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698233527792,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"My Inbox \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"My Inbox \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\"
		"\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698233522933,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698233522933,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-displayInbox?fullWidth=true&scenarioId=SD_APPROVAL_INBOX&showAdditionalAttributes=true\\\",\\\"appId\\\":\\\"#SalesDocument-displayInbox\\\",\\\"timestamp\\\":1698233520860,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698233520860,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"My Inbox \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\"
		"\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"My Inbox - All Items \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698232953070,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698232953070,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Custom logic \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Custom Fields  \\"
		"\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698221797363,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698221797363,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Custom Fields  \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Custom Fields and Logic \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":169822178"
		"8984,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698221788984,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"credit limit\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"credit limit\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1697743879089,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1697743879089,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oI"
		"tem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#FinanceWorkflow-managePurchaseOrderAccrual?%2Fh4screen=WFPurchaseOrderAccrualsReview&ScenarioId=WS78500077\\\",\\\"appId\\\":\\\"#FinanceWorkflow-managePurchaseOrderAccrual\\\",\\\"timestamp\\\":1697652525365,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1697652525365,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"List Sales Orders - VA05\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-list?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesDocument-list\\\",\\\"timestamp\\\":1687968561697,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1687968561697,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Billing Document\\\",\\\"appType\\\":\\\"Appli"
		"cation\\\",\\\"url\\\":\\\"#BillingDocument-displayFactSheet?BillingDocument=0090004714&sap-app-origin-hint=&sap-xapp-state=TASLRC7T2YB6AMIJ9KSIABOS9I6HV71Q9YK49H5E8\\\",\\\"appId\\\":\\\"#BillingDocument-displayFactSheet\\\",\\\"timestamp\\\":1687059478921,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1687059478921,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Journal Entries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocument-displayDocument?AccountingDocument=5100000002&Amount=1404.00&CompanyCode=1010&CompanyCodeName=Company%20Code%201010&CreatedBy=SAP_WFRT&CreatedByName=SAP_WFRT&Currency=EUR&DocumentDate=2023-06-17T00%3A00%3A00.000Z&FiscalYear=2023&Item=000000&ObjectType=Journal%20Entry&Processflowchildrennode=&Processflowlane=3&Processflownode=5100000002000001101020233&Processflownodedocument=5100000002&Processflownodefocus=&Processflownodepotype=3&P"
		"rocessflownodeshorttitle=&Processflownodestatus=Positive&Processflownodestatusdescripti=Free%20for%20payment&sap-intent-param=TAS6D12WNN9O3FJRH5SGDUP7VE9TNBOXUKKEE10J1\\\",\\\"appId\\\":\\\"#AccountingDocument-displayDocument\\\",\\\"timestamp\\\":1687058760490,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1687058760490,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Process Flow - Accounts Payable\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocument-displayProcessFlowAP?DocumentNumber=5100001248&DocumentType=2&FiscalYear=2023&sap-app-origin-hint=&sap-ushell-navmode=explace\\\",\\\"appId\\\":\\\"#AccountingDocument-displayProcessFlowAP\\\",\\\"timestamp\\\":1687058592891,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1687058592891,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":t"
		"rue},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoice\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-process?%24.basicSearch=&CashDiscount1DueDate=2023-06-17T00%3A00%3A00.000Z&CompanyCode=1010&CompanyCodeName=Company%20Code%201010&DocumentCurrency=EUR&DocumentDate=2023-06-17T00%3A00%3A00.000Z&FiscalYear=2023&InvoiceGrossAmount=1404.00&InvoiceStatusAndOrigin=5&InvoiceStatusAndOrigin_Text=Posted&InvoicingParty=17401710&InvoicingPartyName=SAP%20SE&IsBlocked=false&PostingDate=2023-06-17T00%3A00%3A00.000Z&SupplierInvoice=5100001248&SupplierInvoiceIDByInvcgParty=90004713&SupplierInvoiceOrigin=M&SupplierInvoiceOriginDesc=Intercompany%20Supplier%20Invoice&SupplierInvoiceUUID=17c6065e-83a6-1eee-83b0-ae26d2932cc9&SupplierInvoiceWthnFiscalYear=5100001248%2F2023&sap-app-origin-hint=&sap-xapp-state=TASV048HCPLVDYTNE39G53KZMXU4G0FASK2QARF6F\\\",\\\"appId\\\":\\\"#SupplierInvoice-process\\\",\\\"timestamp\\\":1687058525710,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":168705852571"
		"0,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Accounting Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProfitabilityAnalysis-overview\\\",\\\"appId\\\":\\\"#ProfitabilityAnalysis-overview\\\",\\\"timestamp\\\":1685389493651,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1685389493651,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Date Functions\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DateFunction-manage\\\",\\\"appId\\\":\\\"#DateFunction-manage\\\",\\\"timestamp\\\":1684875956890,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1684875956890,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Goods Receipt\\\",\\\"app"
		"Type\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductionOrder-createGR\\\",\\\"appId\\\":\\\"#ProductionOrder-createGR\\\",\\\"timestamp\\\":1684875804652,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1684875804652,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisitionItem-analyzeSBKPIDetailsS4HANA?P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASAVJR0O7424GYN53X51XZL10LX2AQQP9RDP4HMB\\\",\\\"appId\\\":\\\"#PurchaseRequisitionItem-analyzeSBKPIDetailsS4HANA\\\",\\\"timestamp\\\":1684875724333,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1684875724333,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP S"
		"mart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-analyzeNonManagedSpendSBKPI?DisplayCurrency=USD&MaterialGroup=&MaterialGroupName=Not%20assigned&NonManagedSpendAmount=3118119.80&NonManagedSpendAmount_F=%24%203%2C118%2C119.80&NonManagedSpendInPct=100&NonManagedSpendInPct_E=&NonManagedSpendInPct_F=100&P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&TotalSpendAmount=3119112.84&TotalSpendAmount_F=%24%203%2C119%2C112.84&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS51V9IJMC6OWOLLU50K24S027MQCLMSK678592B\\\",\\\"appId\\\":\\\"#PurchaseOrder-analyzeNonManagedSpendSBKPI\\\",\\\"timestamp\\\":1684873574207,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1684873574207,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Purchase Order\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-displayFactSheet?PurchaseOrder"
		"=4500001638&sap-app-origin-hint=&sap-xapp-state=TASW2XP65PLXC8S6RLVIG2CZGK3AP5R0E89GUI2OO\\\",\\\"appId\\\":\\\"#PurchaseOrder-displayFactSheet\\\",\\\"timestamp\\\":1679557453865,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679557453865,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-changeBillingDocument?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BillingDocument-changeBillingDocument\\\",\\\"timestamp\\\":1679527836349,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679527836349,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoice\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-displayFactSheet?FiscalYear=2023&SupplierInvoice=5100001"
		"140&sap-app-origin-hint=&sap-xapp-state=TAS3TSDTPQQT7ZSAVSUVSV63R35CVHCJ6PXJH8TIS\\\",\\\"appId\\\":\\\"#SupplierInvoice-displayFactSheet\\\",\\\"timestamp\\\":1679527418796,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679527418796,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Non-Managed Spend\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-analyzeNonManagedSpend?EvaluationId=.SAP.MM.PUR.NONMANAGEDSPENDEVALUATION\\\",\\\"appId\\\":\\\"#PurchaseOrder-analyzeNonManagedSpend\\\",\\\"timestamp\\\":1679064951666,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679064951666,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Upload Supplier Invoices\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-upload\\\",\\\"appId\\\":\\\"#Sup"
		"plierInvoice-upload\\\",\\\"timestamp\\\":1679064912954,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679064912954,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Invoice-analyzeAutomationRate?EvaluationId=.SAP.KPI.INVOICEAUTOMATIONRATE&/sap-iapp-state=TASUUJUXTNNCVSDCQJGZN26YGDJ7WR1VCQQ92F8YG\\\",\\\"appId\\\":\\\"#Invoice-analyzeAutomationRate\\\",\\\"timestamp\\\":1679064863095,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679064863095,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Supplier-displayFactSheet?CompanyCode=1710&FiscalYear=2022&InvoiceInboundEntryType=0&InvoiceInboundEntryType=1&Supplier=17300001&Supplier"
		"Invoice=5100001031&SupplierInvoiceOrigin=&sap-app-origin-hint=&sap-xapp-state=TASJ3H4T0AWUQUYWGXW4XA68WLQE4ARPILR6KJ2ON\\\",\\\"appId\\\":\\\"#Supplier-displayFactSheet\\\",\\\"timestamp\\\":1679064861740,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679064861740,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Material Documents Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MaterialDocument-displayFactSheet?MaterialDocument=4900007297&MaterialDocumentYear=2023&sap-app-origin-hint=&sap-xapp-state=TASX8532N0PADB5A85TPKWSLO050OV4N2OVDUU642\\\",\\\"appId\\\":\\\"#MaterialDocument-displayFactSheet\\\",\\\"timestamp\\\":1679055660777,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679055660777,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Job"
		"s\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPRun-schedule?JobCatalogEntryName=SAP_SCM_ATP_BOP_RUN\\\",\\\"appId\\\":\\\"#ABOPRun-schedule\\\",\\\"timestamp\\\":1678967002809,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1678967002809,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor BOP Run\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPRun-monitor?ShowLastRunsForVariant=CP_1710_2023&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#ABOPRun-monitor\\\",\\\"timestamp\\\":1678966945599,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1678966945599,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure BOP Variant\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPVariant-configure\\\",\\\"appId\\\":\\\"#ABOPVariant-configure\\\","
		"\\\"timestamp\\\":1678966848048,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1678966848048,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure BOP Segment\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPSegment-configure\\\",\\\"appId\\\":\\\"#ABOPSegment-configure\\\",\\\"timestamp\\\":1678966578762,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1678966578762,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Customer Master\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-manage?BindingPeriodValidityStartDate=2021-10-28T00%3A00%3A00.000Z&Customer=17100001&DistributionChannel=10&HdrOrderProbabilityInPercent=0%25&OrganizationDivision=00&OverallSDDocReferenceStatus=&OverallSDDocumentRejectionSts=&OverallSDProcessStatus=&PurchaseOrd"
		"erByCustomer=1010&ResponsibleEmployee=0&ResponsibleEmployeeName=&SalesAreaDesc=Dom.%20Sales%20Org%20US%2C%20Direct%20Sales%2C%20Product%20Division%2000&SalesDocApprovalStatus=&SalesDocumentTypeName=Quotation%2020001937&SalesOrganization=1710&SalesQuotation=20001937&SalesQuotationApprovalReason=&SalesQuotationType=QT&SlsQtanApprovalStsCriticality=0&SoldToParty=17100001&SoldToPartyName=Domestic%20US%20Customer%201&TotalNetAmount=0.00&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TASPWGVFDWIMQPISA9PQ2TXY6AELSIE0KDEHN4DKB\\\",\\\"appId\\\":\\\"#Customer-manage\\\",\\\"timestamp\\\":1676410616743,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1676410616743,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Quotation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-displayFactSheet?AcademicTitleName=Mr.&CreatedByUser=S4H_SD&CreatedByUserFirstName=doe&Creat"
		"edByUserLastName=jean&PurchaseOrderByCustomer=1010&RequestedDeliveryDate=2021-10-28&SDDocumentCategory=B&SalesOrganization=1710&SalesOrganizationName=Dom.%20Sales%20Org%20US&SalesQuotation=0020001937&SalesQuotationNetAmount=0&ShipToParty=0017100001&ShipToPartyAdditionalName=&ShipToPartyName=Domestic%20US%20Customer%201&SoldToParty=0017100001&SoldToPartyAdditionalName=&SoldToPartyName=Domestic%20US%20Customer%201&TransactionCurrency=USD\\\",\\\"appId\\\":\\\"#SalesQuotation-displayFactSheet\\\",\\\"timestamp\\\":1676410594869,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1676410594869,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Customers Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-displaySalesOverviewPage\\\",\\\"appId\\\":\\\"#Customer-displaySalesOverviewPage\\\",\\\"timestamp\\\":1676408618804,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\""
		":1676408618804,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Product Allocation Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocation-displayProductAllocationOverview\\\",\\\"appId\\\":\\\"#ProductAllocation-displayProductAllocationOverview\\\",\\\"timestamp\\\":1676398744477,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1676398744477,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Operational Supplier Evaluation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierPerformance-analyzeKPIDetailsS4HANA?P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASNSNP91OR08BQLR7AVPRL8CNALCID5NYB0BP5TB\\\",\\\"appId\\\":\\\"#SupplierPerformance-analyzeKPIDetailsS4HANA\\\",\\\"timestam"
		"p\\\":1676398260986,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1676398260986,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-manageWorkflows?ScenarioId=WS00800238\\\",\\\"appId\\\":\\\"#PurchaseOrder-manageWorkflows\\\",\\\"timestamp\\\":1675794132009,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1675794132009,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-manageApprovalWorkflow\\\",\\\"appId\\\":\\\"#SalesDocument-manageApprovalWorkflow\\\",\\\"timestamp\\\":1675099147845,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1675099147845,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Journal Entries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocument-displayFactSheet?AccountingDocument=9400000001&CompanyCode=1010&FiscalYear=2022&sap-app-origin-hint=&/detail/1010/2022/9400000001\\\",\\\"appId\\\":\\\"#AccountingDocument-displayFactSheet\\\",\\\"timestamp\\\":1669742926660,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669742926660,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Search Service Order Quotations\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ServiceQuotation-search?sap-ui-tech-hint=WCF&/sap-iapp-state=TASLYD446QZERO1D7WGWQLZK9OQMO7Z5IO2E9CLIW\\\",\\\"appId\\\":\\\"#ServiceQuotation-search\\\",\\\"timestamp\\\":1669717091616,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669717091616,\\\"aUsageArr"
		"ay\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Internal Order Factsheet\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InternalOrder-displayFactSheet?InternalOrder=000002000742&sap-app-origin-hint=&sap-ushell-navmode=inplace\\\",\\\"appId\\\":\\\"#InternalOrder-displayFactSheet\\\",\\\"timestamp\\\":1669717081566,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669717081566,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Search Service Order\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ServiceOrder-search?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#ServiceOrder-search\\\",\\\"timestamp\\\":1669716876268,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669716876268,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount"
		"\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Release for Billing\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Service-releaseItemsForBilling?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#Service-releaseItemsForBilling\\\",\\\"timestamp\\\":1669715571345,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669715571345,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Service Order\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ServiceOrder-create?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#ServiceOrder-create\\\",\\\"timestamp\\\":1669713742370,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669713742370,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Activity Attributes\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\"
		"\"#BusProcSchedgActyAttribute-configure\\\",\\\"appId\\\":\\\"#BusProcSchedgActyAttribute-configure\\\",\\\"timestamp\\\":1669667899851,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669667899851,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Characteristic Combinations\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ObjValDetnCharcCombination-manage\\\",\\\"appId\\\":\\\"#ObjValDetnCharcCombination-manage\\\",\\\"timestamp\\\":1669667053895,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669667053895,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Supply Protection\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupAvailabilityProtectionPlan-manage\\\",\\\"appId\\\":\\\"#SupAvailabilityProtectionPlan-manage\\\",\\\"timestamp\\\":16696664"
		"23161,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669666423161,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Alternative Control\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AlternativeControl-configure\\\",\\\"appId\\\":\\\"#AlternativeControl-configure\\\",\\\"timestamp\\\":1669665468604,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669665468604,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Substitution Strategy\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SubstitutionStrategy-configure\\\",\\\"appId\\\":\\\"#SubstitutionStrategy-configure\\\",\\\"timestamp\\\":1669665062760,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669665062760,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Assign Product to Product Allocation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocationSequence-assignProductToProductAllocation\\\",\\\"appId\\\":\\\"#ProductAllocationSequence-assignProductToProductAllocation\\\",\\\"timestamp\\\":1669660421708,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669660421708,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Product Allocation Sequences\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocationSequence-manageProductAllocationSequences\\\",\\\"appId\\\":\\\"#ProductAllocationSequence-manageProductAllocationSequences\\\",\\\"timestamp\\\":1669660161934,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669660161934,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount"
		"\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Product Allocation Planning Data\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocationObject-manageProductAllocationPlanningData\\\",\\\"appId\\\":\\\"#ProductAllocationObject-manageProductAllocationPlanningData\\\",\\\"timestamp\\\":1669659941545,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669659941545,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Product Allocation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocationObject-configureProductAllocation\\\",\\\"appId\\\":\\\"#ProductAllocationObject-configureProductAllocation\\\",\\\"timestamp\\\":1669659641314,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669659641314,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\"
		"\":{\\\"title\\\":\\\"Release for Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ATPRequirement-releaseForDelivery\\\",\\\"appId\\\":\\\"#ATPRequirement-releaseForDelivery\\\",\\\"timestamp\\\":1669658488822,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669658488822,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Order Fulfillment Responsibilities\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OrderFulfillmentResponsibility-configure\\\",\\\"appId\\\":\\\"#OrderFulfillmentResponsibility-configure\\\",\\\"timestamp\\\":1669658400798,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669658400798,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Custom BOP Sorting\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPCust"
		"omSort-configure\\\",\\\"appId\\\":\\\"#ABOPCustomSort-configure\\\",\\\"timestamp\\\":1669652823007,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669652823007,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#LegalTask-displayInbox?allItems=true\\\",\\\"appId\\\":\\\"#LegalTask-displayInbox\\\",\\\"timestamp\\\":1669634740487,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669634740487,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Documents with Customer-Expected Price\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-listCustomerExpectedPrices\\\",\\\"appId\\\":\\\"#SalesDocument-listCustomerExpectedPrices\\\",\\\"timestamp\\\":1669385188362,\\\"icon\\\":\\\"sap-icon://"
		"product\\\"},\\\"iTimestamp\\\":1669385188362,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-scheduleOutput?%2Fh4screen=SDOutput&JobCatalogEntryName=SALES_DOCUMENTS_OUTPUT_RUN\\\",\\\"appId\\\":\\\"#SalesOrder-scheduleOutput\\\",\\\"timestamp\\\":1669384026550,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669384026550,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Send Outputs for Purchase Scheduling Agreement Releases\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseSchedulingAgreement-printScheduledItemMessages?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PurchaseSchedulingAgreement-printScheduledItemMessages\\\",\\\"timestamp\\\":1669383948580,\\\"icon\\\":\\\"sap-icon://product"
		"\\\"},\\\"iTimestamp\\\":1669383948580,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Teams and Responsibilities\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#TeamAsResponsible-maintain?openMode=embedIntoDetails\\\",\\\"appId\\\":\\\"#TeamAsResponsible-maintain\\\",\\\"timestamp\\\":1669371773496,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669371773496,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Stock / Requirements List\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MRPMaterial-monitorSupplyAndDemand?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#MRPMaterial-monitorSupplyAndDemand\\\",\\\"timestamp\\\":1669361510622,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669361510622,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InteractionCenterInbox-launch?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#InteractionCenterInbox-launch\\\",\\\"timestamp\\\":1669276359123,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669276359123,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-displayInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-displayInWebGUI\\\",\\\"timestamp\\\":1669236477423,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669236477423,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Orders - Automa"
		"tic Extraction\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderRequest-autoExtract\\\",\\\"appId\\\":\\\"#SalesOrderRequest-autoExtract\\\",\\\"timestamp\\\":1669207577682,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669207577682,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Service Order Quotation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ServiceQuotation-create?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#ServiceQuotation-create\\\",\\\"timestamp\\\":1669189435437,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669189435437,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Purchase Order - Advanced\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-change?sap-ui-tech-hint=GUI&uitype=advancedNoPar\\\","
		"\\\"appId\\\":\\\"#PurchaseOrder-change\\\",\\\"timestamp\\\":1669151916289,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669151916289,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Your Solution\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CloudSolution-manage\\\",\\\"appId\\\":\\\"#CloudSolution-manage\\\",\\\"timestamp\\\":1669135072203,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669135072203,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Preliminary Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PrelimBillingDocument-manage\\\",\\\"appId\\\":\\\"#PrelimBillingDocument-manage\\\",\\\"timestamp\\\":1669102287017,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669102287017,\\\"aUsageArray\\\":[0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PrelimBillingDocument-manageApprovalWorkflow\\\",\\\"appId\\\":\\\"#PrelimBillingDocument-manageApprovalWorkflow\\\",\\\"timestamp\\\":1669037464851,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669037464851,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Customer Contacts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CollectionsCustomerContact-manage\\\",\\\"appId\\\":\\\"#CollectionsCustomerContact-manage\\\",\\\"timestamp\\\":1669034484217,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669034484217,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"C"
		"hange Condition Contract\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesRebateAgreement-changeAdvanced?CndnContrActvtnStatus=&CndnContrActvtnStatusName=Active&CndnContrMainSystemStatus=ICC02&CndnContrMainSystemStatusText=Released&CndnContrSettlmtIsLockedName=Not%20Locked&CndnContrType=0S01&CndnContrTypeDesc=Sales%20Rebate&CndnContrValidFrom=2022-11-18&CndnContrValidTo=2022-12-31&ConditionContract=2000000012&ConditionContract.CndnContrType=0S01&ConditionContract.ConditionContract.CndnContrType=0S01&Customer=17100003&CustomerName=Domestic%20Customer%20US%203&DeleteLogically=false&ExternalDocumentReferenceID=&Lock=true&LockForSettlement=true&PrepareForArchiving=false&Release=false&ReleaseCompletely=false&ReleaseForSettlement=false&UICT_ActvtnStatusCriticality=3&sap-app-origin-hint=&sap-xapp-state=TAS79211N1N0Q5WQE5DYKHSRG8MLEEYV395CE5H0S\\\",\\\"appId\\\":\\\"#SalesRebateAgreement-changeAdvanced\\\",\\\"timestamp\\\":1668956394363,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":16689"
		"56394363,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Condition Contracts - Sales Rebates\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesRebateAgreement-manage?sap-app-origin-hint=&/?sap-iapp-state=TASSD1NC3DV0765GRRTA7Z378B9XVCNVE43JSB5YS\\\",\\\"appId\\\":\\\"#SalesRebateAgreement-manage\\\",\\\"timestamp\\\":1668955714095,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668955714095,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Purchasing Info Record\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchasingInfoRecord-change?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PurchasingInfoRecord-change\\\",\\\"timestamp\\\":1668868821391,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668868821391,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Maintain Business Partner\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BusinessPartner-maintain?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BusinessPartner-maintain\\\",\\\"timestamp\\\":1668855133625,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668855133625,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Condition Contract\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesRebateAgreement-displayFactSheet?CndnContrActvtnStatus=&CndnContrActvtnStatusName=Active&CndnContrMainSystemStatus=ICC02&CndnContrMainSystemStatusText=Released&CndnContrSettlmtIsLockedName=Not%20Locked&CndnContrType=0S03&CndnContrTypeDesc=Sales%20Rebate%20-%202Step&CndnContrValidFrom=2022-11-18&CndnContrValidTo=2022-12-31&ConditionContract=2000000011&Customer=17100003&CustomerNa"
		"me=Domestic%20Customer%20US%203&DeleteLogically=false&ExternalDocumentReferenceID=&Lock=true&LockForSettlement=true&PrepareForArchiving=false&Release=false&ReleaseCompletely=false&ReleaseForSettlement=false&UICT_ActvtnStatusCriticality=3&sap-app-origin-hint=&sap-xapp-state=TASLK8RMM93YUM2PDF4PYIOP5410OBNKZ6R8XSY9Y\\\",\\\"appId\\\":\\\"#SalesRebateAgreement-displayFactSheet\\\",\\\"timestamp\\\":1668784535320,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668784535320,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Condition Contract\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesRebateAgreement-createAdvanced?CndnContrType=0S01&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesRebateAgreement-createAdvanced\\\",\\\"timestamp\\\":1668771951729,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668771951729,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Purchasing Info Records\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchasingInfoRecord-maintain\\\",\\\"appId\\\":\\\"#PurchasingInfoRecord-maintain\\\",\\\"timestamp\\\":1668672428459,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668672428459,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"VC Modeling Environment\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#VariantConfiguration-modelingVariantConfiguration?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#VariantConfiguration-modelingVariantConfiguration\\\",\\\"timestamp\\\":1668670405041,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668670405041,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\"
		"\":\\\"Display Output Condition Records - Sales\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOutputCondition-display?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesOutputCondition-display\\\",\\\"timestamp\\\":1668669919180,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668669919180,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Price Conditions - Purchasing\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PriceCondition-create?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PriceCondition-create\\\",\\\"timestamp\\\":1668669154837,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668669154837,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Purchasing Info Record by Supplier\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Pur"
		"chasingInfoRecord-displayBySupplier?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PurchasingInfoRecord-displayBySupplier\\\",\\\"timestamp\\\":1668605207963,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668605207963,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ConditionContract-manageWorkflows?%2Fh4screen=WFConditionContract&ScenarioId=WS02000435%2CWS02000436\\\",\\\"appId\\\":\\\"#ConditionContract-manageWorkflows\\\",\\\"timestamp\\\":1668604336988,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668604336988,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Condition Contracts - Supplier Rebates\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierRebateAgreement-manage\\\",\\"
		"\"appId\\\":\\\"#SupplierRebateAgreement-manage\\\",\\\"timestamp\\\":1668520088888,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668520088888,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Material Document List\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MaterialMovement-displayMaterialDocumentListInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#MaterialMovement-displayMaterialDocumentListInWebGUI\\\",\\\"timestamp\\\":1668515431409,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668515431409,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Dashboard - SAP Application Interface Framework\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-manage?sap-ui-tech-hint=WDA\\\",\\\"appId\\\":\\\"#AIFMessage-manage\\\",\\\"times"
		"tamp\\\":1668508864773,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668508864773,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Monitoring Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-startMessageOverview?sap-app-origin-hint=&/2022-11-01T12%3A38%3A33Z&2022-11-15T12%3A38%3A33Z&7\\\",\\\"appId\\\":\\\"#AIFMessage-startMessageOverview\\\",\\\"timestamp\\\":1668508714801,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668508714801,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Monitoring\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-startMessageMonitoring\\\",\\\"appId\\\":\\\"#AIFMessage-startMessageMonitoring\\\",\\\"timestamp\\\":1668508714419,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp"
		"\\\":1668508714419,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Monitoring for Integration Experts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-startMessageMonitoringAdministrators\\\",\\\"appId\\\":\\\"#AIFMessage-startMessageMonitoringAdministrators\\\",\\\"timestamp\\\":1668508592246,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668508592246,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Monitoring for Integration Experts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-startMessageMonitoringIntegrationExperts\\\",\\\"appId\\\":\\\"#AIFMessage-startMessageMonitoringIntegrationExperts\\\",\\\"timestamp\\\":1668508360200,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668508360200,\\\"aUsageArray\\\":[0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Quotations - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-manageV2\\\",\\\"appId\\\":\\\"#SalesQuotation-manageV2\\\",\\\"timestamp\\\":1668506928394,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668506928394,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Customer Return\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-createCustomerReturn?P_DisplayCurrency=EUR&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASAT2MU6YFU3WVSU2ME5F23TTYATR24BX45DSECN\\\",\\\"appId\\\":\\\"#CustomerReturn-createCustomerReturn\\\",\\\"timestamp\\\":1668499918007,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668499918007,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Outbound Delivery - Proof of Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-changePODInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-changePODInWebGUI\\\",\\\"timestamp\\\":1668434892336,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668434892336,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DeliveryApplicationJob-scheduleGICreation?JobCatalogEntryName=SAP_LE_WS_MONITOR_OUTB_DEL_GDS&/v4_JobRunList?sap-iapp-state=TASWMLA0QHHZUWRROXSULVLP3F819NJM9C6VJSG7B\\\",\\\"appId\\\":\\\"#DeliveryApplicationJob-scheduleGICreation\\\",\\\"timestamp\\\":1668431164189,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668431164189,\\\"aUsageArray\\\":[0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Item Proposals\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesItemProposal-createItemProposal?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesItemProposal-createItemProposal\\\",\\\"timestamp\\\":1668412021498,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668412021498,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Sales Quotations - VA22\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-change?%40odata.etag=W%2F%22SADL-202211110714374924380C~20221111071437.4924380%22&BindingPeriodValidityEndDate=2023-11-11&BindingPeriodValidityStartDate=2022-11-10&ChangeValidity=false&HdrGeneralIncompletionStatus=C&OverallChmlCmplncStatus=&OverallSDProcessStatus=A&OverallSDProcessStatus_Text=Open&OverallSafetyDataSheet"
		"Status=&OverallTrdCmplncEmbargoSts=&OvrlItmGeneralIncompletionSts=C&PurchaseOrderByCustomer=11223344&SalesQuotation=20001968&SalesQuotationDate=2022-11-10&SalesQuotationManage.OverallSDProcessStatus=A&SalesQuotationManage._OverallSDProcessStatus.OverallSDProcessStatus=A&SlsQtanDueDateCriticality=3&SoldToParty=17100001&SoldToPartyName=Domestic%20US%20Customer%201&TotalCreditCheckStatus=&TotalNetAmount=87.75&TransactionCurrency=USD&Updatable=true&sap-app-origin-hint=&sap-xapp-state=TASV54K0XBV28X7HN4TZ2BUZNCFBUBJDUYO03JSDM\\\",\\\"appId\\\":\\\"#SalesQuotation-change\\\",\\\"timestamp\\\":1668151401397,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668151401397,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Determine Refund\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReturnsOrder-refund?sap-app-origin-hint=&/RefundDetermination/60000191\\\",\\\"appId\\\":\\\"#ReturnsOrder-refu"
		"nd\\\",\\\"timestamp\\\":1668085052117,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668085052117,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Enter Inspection Results - From Warehouse\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MaterialInspection-maintainCustomerMaterialInspectionInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#MaterialInspection-maintainCustomerMaterialInspectionInWebGUI\\\",\\\"timestamp\\\":1668084634380,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668084634380,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Returns Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReturnsDelivery-changeInWebGUI?ReturnsDelivery=84000079&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#ReturnsDelivery-changeInWebGUI\\\",\\\"ti"
		"mestamp\\\":1668083075690,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668083075690,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Transfer / Manage Stock\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-manageStock?sap_mmim_apptype=manage\\\",\\\"appId\\\":\\\"#Material-manageStock\\\",\\\"timestamp\\\":1668006287179,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668006287179,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseContract-manageWorkflows?ScenarioId=WS00800304\\\",\\\"appId\\\":\\\"#PurchaseContract-manageWorkflows\\\",\\\"timestamp\\\":1667940019799,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667940019799,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-manageWorkflows?ScenarioId=WS00800251%2CWS00800303\\\",\\\"appId\\\":\\\"#SupplierInvoice-manageWorkflows\\\",\\\"timestamp\\\":1667940002554,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667940002554,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Delivery Performance\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-analyze_deliv_perf?SalesOrder=5039&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-analyze_deliv_perf\\\",\\\"timestamp\\\":1667935581419,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667935581419,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\""
		":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierList-manageWorkflows?ScenarioId=WS02000090\\\",\\\"appId\\\":\\\"#SupplierList-manageWorkflows\\\",\\\"timestamp\\\":1667925078090,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667925078090,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Customer List\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-displayList\\\",\\\"appId\\\":\\\"#Customer-displayList\\\",\\\"timestamp\\\":1667913414470,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667913414470,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage User Defined Criteria for Supplier Evaluation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierPerformance-manage\\\",\\\"appId"
		"\\\":\\\"#SupplierPerformance-manage\\\",\\\"timestamp\\\":1667909977959,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667909977959,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BankAccount-displayInbox?scenarioId=FCLM_BAM_APPR&showAdditionalAttributes=true\\\",\\\"appId\\\":\\\"#BankAccount-displayInbox\\\",\\\"timestamp\\\":1667859844772,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667859844772,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-ssb_ReturnRates?EvaluationId=.E.1556178455324\\\",\\\"appId\\\":\\\"#CustomerReturn-ssb_ReturnRates\\\",\\\"timestamp\\\":1667826716736,\\\"icon\\\":\\\"sap-icon:"
		"//product\\\"},\\\"iTimestamp\\\":1667826716736,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Track Customer Returns\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DocumentFlow-displayCustomerReturnsTreckingInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#DocumentFlow-displayCustomerReturnsTreckingInWebGUI\\\",\\\"timestamp\\\":1667826465525,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667826465525,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Analyze Delivery Performance - Shipped as Planned\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-analyseShippedAsPlanned\\\",\\\"appId\\\":\\\"#OutboundDelivery-analyseShippedAsPlanned\\\",\\\"timestamp\\\":1667826051693,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667826051693,\\\""
		"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Quotations - Flexible Analysis\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-analyzeQuotation?sap-ui-tech-hint=WDA\\\",\\\"appId\\\":\\\"#SalesQuotation-analyzeQuotation\\\",\\\"timestamp\\\":1667824929500,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667824929500,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Material Coverage\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MRPPlanningSegment-monitorSegment\\\",\\\"appId\\\":\\\"#MRPPlanningSegment-monitorSegment\\\",\\\"timestamp\\\":1667815476664,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667815476664,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true}"
		",{\\\"oItem\\\":{\\\"title\\\":\\\"Track Sales Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-listIncompleteDocuments&/?sap-iapp-state--history=TASOQAUSMGGQ2OQ1E6YXHG4NF1MAAIVWYLDIH47UU&sap-iapp-state=TAS8CSVBQULF5WYC797M4DEYF6QSNXT4XAUT9J3J0\\\",\\\"appId\\\":\\\"#SalesContract-listIncompleteDocuments\\\",\\\"timestamp\\\":1667565049466,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667565049466,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order Fulfillment Issues\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderFulfillmentIssue-analyzeKPIDetails?IsPotentialFutureIssue=0&sap-app-origin-hint=&sap-xapp-state=TASIEY705KOTYJ79EHDQFOB93O4SFMONYBJLQYYZF\\\",\\\"appId\\\":\\\"#SalesOrderFulfillmentIssue-analyzeKPIDetails\\\",\\\"timestamp\\\":1667564836198,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667564836198,\\\"aUsa"
		"geArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Incomplete Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-listIncompleteDocuments&/?sap-iapp-state--history=TASCX6OJDCJE8NZY6VQD3OU5LYOU9U8NCJUVB6HQY\\\",\\\"appId\\\":\\\"#SalesQuotation-listIncompleteDocuments\\\",\\\"timestamp\\\":1667563459476,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667563459476,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Incomplete Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesInquiry-listIncompleteDocuments\\\",\\\"appId\\\":\\\"#SalesInquiry-listIncompleteDocuments\\\",\\\"timestamp\\\":1667563214241,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667563214241,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Mass Change of Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocumentMassChangeRequest-massChangeSalesDocuments?JobCatalogEntryName=SAP_SD_MCC_SLSDOCBG_J\\\",\\\"appId\\\":\\\"#SalesDocumentMassChangeRequest-massChangeSalesDocuments\\\",\\\"timestamp\\\":1667563117114,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667563117114,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Mass Change of Sales Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocumentMassChangeRequest-massChangeSalesOrder?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesDocumentMassChangeRequest-massChangeSalesOrder\\\",\\\"timestamp\\\":1667562882174,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667562882174,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Mass Changes of Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocumentMassChangeRequest-monitorJobLogDetails?SlsDocMassChangeRequestUUID=guid'0ecf98cb-3dd7-1edc-92f4-ba9395a6a1ba'&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesDocumentMassChangeRequest-monitorJobLogDetails\\\",\\\"timestamp\\\":1667562860018,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667562860018,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create BP relationship\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BusinessPartner-createRelationship?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BusinessPartner-createRelationship\\\",\\\"timestamp\\\":1667466521043,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667466521043,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create BP role definition\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BusinessPartner-createRoleDefinition?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BusinessPartner-createRoleDefinition\\\",\\\"timestamp\\\":1667466489498,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667466489498,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Purchasing Info Record\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchasingInfoRecord-create?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PurchasingInfoRecord-create\\\",\\\"timestamp\\\":1667463822821,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667463822821,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title"
		"\\\":\\\"Manage Business Partner\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BusinessPartner-manage\\\",\\\"appId\\\":\\\"#BusinessPartner-manage\\\",\\\"timestamp\\\":1667313537793,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667313537793,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Material\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-display?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Material-display\\\",\\\"timestamp\\\":1667310409129,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667310409129,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Material\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-create?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Material-create\\\",\\\"timestamp\\\":1667304883"
		"289,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667304883289,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Close Period for Product Master\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-closingPeriodJob?JobCatalogEntryName=SAP_CMD_MMPV\\\",\\\"appId\\\":\\\"#Material-closingPeriodJob\\\",\\\"timestamp\\\":1667292498125,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667292498125,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Split Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-splitInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-splitInWebGUI\\\",\\\"timestamp\\\":1667221713753,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667221713753,\\\"aUsageArray\\\":[0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Purchase Order - Advanced\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-create?sap-ui-tech-hint=GUI&uitype=advanced\\\",\\\"appId\\\":\\\"#PurchaseOrder-create\\\",\\\"timestamp\\\":1667207415033,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667207415033,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Catalog Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProcurementCatalog-manageItems\\\",\\\"appId\\\":\\\"#ProcurementCatalog-manageItems\\\",\\\"timestamp\\\":1667060500863,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667060500863,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Purchase Req"
		"uisition\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-create?mode=create&sap-ui-tech-hint=UI5&/Search\\\",\\\"appId\\\":\\\"#PurchaseRequisition-create\\\",\\\"timestamp\\\":1667058853584,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667058853584,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Default Settings for Users\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#UserDefaults-manage?mode=admin&/ContainerDisplay\\\",\\\"appId\\\":\\\"#UserDefaults-manage\\\",\\\"timestamp\\\":1667036310236,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667036310236,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-manageWorkflows?ScenarioId=WS00800157%"
		"2CWS00800173%2CWS02000458%2CWS02000471%2CWS02000434%2CWS02000438&type=lean\\\",\\\"appId\\\":\\\"#PurchaseRequisition-manageWorkflows\\\",\\\"timestamp\\\":1667035781932,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667035781932,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Situation Types\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SituationDefinition-maintain?ui-type=objectbased&/?sap-iapp-state--history=TAS0WFM0WLJXS3RMQTHW09C9Z3HA51BOPM9GSM02Q&sap-iapp-state=TASPVYA83TGHM2DFMZCH1IKUPTKXXUS99LCTQPWBD\\\",\\\"appId\\\":\\\"#SituationDefinition-maintain\\\",\\\"timestamp\\\":1666942482003,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666942482003,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Situations\\\",\\\"appType\\\":\\\"Applicati"
		"on\\\",\\\"url\\\":\\\"#SituationInstance-monitor?CalendarYear=2022&SitnDefinitionID=Z_CONTRACT&sap-app-origin-hint=&sap-xapp-state=TASN4BHYTE0DM4Y5OJ3RJ9BLZDVRV6NOI32LMS51D\\\",\\\"appId\\\":\\\"#SituationInstance-monitor\\\",\\\"timestamp\\\":1666942474889,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666942474889,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Inquiries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesInquiry-manage&/?sap-iapp-state=TASEBUCQS7HZLQ6ZNRP7MV2YCMN18K5YQD1ATIM59&sap-iapp-state--history=TASP8EB9JMGIWC8Q44VB21Q92LS7XKM4YR30AW9PV\\\",\\\"appId\\\":\\\"#SalesInquiry-manage\\\",\\\"timestamp\\\":1666941615114,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666941615114,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"D"
		"isplay Sales Inquiries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesInquiry-display?%24.basicSearch=10000150%20&Customer=17100003&OverallSDProcessStatus=A&PurchaseOrderByCustomer=11223344&SalesInquiry=10000150&SalesInquiryDate=2022-10-27T00%3A00%3A00.000Z&TotalNetAmount=175.50&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TASJQ72J7JFVDWM2W6LYIGKBXVW4GZLBQWH0LAK93&sap.suite.ui.generic.template.customData=%5Bobject%20Object%5D&sap.suite.ui.generic.template.genericData=%5Bobject%20Object%5D\\\",\\\"appId\\\":\\\"#SalesInquiry-display\\\",\\\"timestamp\\\":1666939724614,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666939724614,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Inquiries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesInquiry-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesInquiry-create\\\",\\\"timestamp\\\":166"
		"6939360951,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666939360951,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Credit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CreditMemoRequest-change?%24.basicSearch=60000184&BillingDocumentDate=2022-10-27T00%3A00%3A00.000Z&CreditMemoRequest=60000184&CreditMemoRequestDate=2022-10-27T00%3A00%3A00.000Z&Customer=17100001&HeaderBillingBlockReason=Y8&OverallOrdReltdBillgStatus=A&PurchaseOrderByCustomer=11223344&SoldToPartyName=Domestic%20US%20Customer%201&TotalNetAmount=17.55&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TAS1HNSC94YA3G1JN2WNHXN69WWMTB3KBI76DL9MT&sap.suite.ui.generic.template.customData=%5Bobject%20Object%5D&sap.suite.ui.generic.template.genericData=%5Bobject%20Object%5D\\\",\\\"appId\\\":\\\"#CreditMemoRequest-change\\\",\\\"timestamp\\\":1666937365056,\\\"icon\\\":\\\"sap-icon://produc"
		"t\\\"},\\\"iTimestamp\\\":1666937365056,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Outbound Deliveries for Picking\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-listForPickingInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-listForPickingInWebGUI\\\",\\\"timestamp\\\":1666867345073,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666867345073,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Outbound Deliveries for Goods Issue\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-listForGoodsIssue?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-listForGoodsIssue\\\",\\\"timestamp\\\":1666867139100,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666867139100,\\\"aUsageArray\\\":[0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Sales Order Schedule Lines - Due for Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createForSOSchedInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-createForSOSchedInWebGUI\\\",\\\"timestamp\\\":1666866769511,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666866769511,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Electronic Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ElectronicDocument-documentComplianceCockpit\\\",\\\"appId\\\":\\\"#ElectronicDocument-documentComplianceCockpit\\\",\\\"timestamp\\\":1666789967409,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666789967409,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount"
		"\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Close Periods\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PostingPeriod-close?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PostingPeriod-close\\\",\\\"timestamp\\\":1666778669189,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666778669189,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Purchase Order Value and Scheduling Agreement Value\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-analyzeKPIS4HANA?P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASUR2HPU0TK9EXS9DGR4FT5NU0GLMFCZ4ELHOQH1\\\",\\\"appId\\\":\\\"#PurchaseOrder-analyzeKPIS4HANA\\\",\\\"timestamp\\\":1647540110097,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1647540110097,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Activity\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierActivity-display?CompanyCode=DE01&CostCenter=&EmployeeFullName=Franz%20Musterman&P_DisplayCurrency=USD&PurchasingCategory=&PurgCatDescription=&PurgCatUUID=00000000-0000-0000-0000-000000000000&SuplrActyDescription=Activity_09.10PP&SuplrActyLifecycleStatus=01&SuplrActyLifecycleStatusName=Not%20Started&SuplrActyLifecycleStatusName_Text=Not%20Started&SuplrActyName=Activity_09.10PP&SuplrActyPriority=1&SuplrActyPriorityName=Low&SuplrActyPriorityName_Text=Low&SuplrActyType=SD&SuplrActyUUID=1246368b-d7aa-1ed9-bacc-58d336a7a364&Supplier=17300001&SupplierActivity=31&SupplierName=Domestic%20US%20Supplier%201&TotalTaskCount=0&UserID=S4H_MM&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS1EGFTNHBNM839L992WBXUOBTDLMNK0VZDJEBMT\\\",\\\"appId\\\":\\\"#SupplierActivity-display\\\",\\\"timestamp\\\":1647540082327,\\\"icon\\\":\\\"sap-icon://produc"
		"t\\\"},\\\"iTimestamp\\\":1647540082327,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Activity\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierActivity-change?%24.basicSearch=&CriticalityCode=0&PurchaserRespFullName=Franz%20Musterman&PurchaserResponsible=S4H_MM&PurchasingCategory=&PurgCatDescription=&SuplrActyLifecycleStatus=01&SuplrActyPriority=1&SuplrActyType=SD&SuplrActyUUID=0ad0658a-6f04-1ed8-b4f4-76a332088d42&SupplierActivity=11&UserHasAssetChangeAuthzn=true&sap-app-origin-hint=&sap-xapp-state=TASMACHF5S1H69QQ8Y6ZE8L73D0Y3TAM5PQG7QZR3\\\",\\\"appId\\\":\\\"#SupplierActivity-change\\\",\\\"timestamp\\\":1646947677659,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646947677659,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Overview Inventory Processing\\"
		"\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InventoryManagement-displayMonitoringOverviewPage\\\",\\\"appId\\\":\\\"#InventoryManagement-displayMonitoringOverviewPage\\\",\\\"timestamp\\\":1646947591823,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646947591823,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Activities\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierActivity-manage?P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS7QTJAWOG67Y4BFG4AZF49ID969DKF1A84PG8AM\\\",\\\"appId\\\":\\\"#SupplierActivity-manage\\\",\\\"timestamp\\\":1646947234560,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646947234560,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Purchase Order Items\\\",\\\"app"
		"Type\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrderItem-monitorPurDocItems?P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASAZ72WVY83LN86QHBYQZNMUNC3O7MHAYLJLZ24A\\\",\\\"appId\\\":\\\"#PurchaseOrderItem-monitorPurDocItems\\\",\\\"timestamp\\\":1646775066230,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646775066230,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisitionItem-analyzeNoTouchRateSB?P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS94LTIA4NZ7MQ0RGXCO9PE1H0MQW9L7U9FKIXB2\\\",\\\"appId\\\":\\\"#PurchaseRequisitionItem-analyzeNoTouchRateSB\\\",\\\"timestamp\\\":1646775054900,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646775054900,\\\"aUsageArray\\\""
		":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Overview Inventory Management\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InventoryManagement-displayAnalyticsOverviewPage\\\",\\\"appId\\\":\\\"#InventoryManagement-displayAnalyticsOverviewPage\\\",\\\"timestamp\\\":1646774322121,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646774322121,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-ssb_Confirmed?EvaluationId=.E.1478695250218\\\",\\\"appId\\\":\\\"#SalesOrder-ssb_Confirmed\\\",\\\"timestamp\\\":1646773764024,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646773764024,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\"
		"\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-ssb_Check_Opn_Sls?EvaluationId=.E.1464880658803\\\",\\\"appId\\\":\\\"#BillingDocument-ssb_Check_Opn_Sls\\\",\\\"timestamp\\\":1646773695618,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646773695618,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Predictive Models\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PredictiveScenario-ummOverview\\\",\\\"appId\\\":\\\"#PredictiveScenario-ummOverview\\\",\\\"timestamp\\\":1646768665130,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646768665130,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Journal Entry Analyzer\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocume"
		"nt-analyzeGLLineItem?AccountingDocument=100000009&CompanyCode=1710&CompanyCode_Text=Company%20Code%201710&DocumentDate=2018-11-05T00%3A00%3A00.000Z&FiscalPeriod=010&FiscalYear=2019&IntercompanyTransaction=&PostingDate=2019-10-16T00%3A00%3A00.000Z&sap-app-origin-hint=&sap-xapp-state=TASRH6XPGK9IGIG351MPC49ZIDGIHG5J6BUMAL927\\\",\\\"appId\\\":\\\"#AccountingDocument-analyzeGLLineItem\\\",\\\"timestamp\\\":1646764673286,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646764673286,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Reset Cleared Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ClearingAccountingDocument-resetClearedItems\\\",\\\"appId\\\":\\\"#ClearingAccountingDocument-resetClearedItems\\\",\\\"timestamp\\\":1646764632551,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646764632551,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Enterprise Search Models\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#EnterpriseSearchModel-manage\\\",\\\"appId\\\":\\\"#EnterpriseSearchModel-manage\\\",\\\"timestamp\\\":1646762198693,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646762198693,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Define Advanced Compliance Reports\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReportingTask-define\\\",\\\"appId\\\":\\\"#ReportingTask-define\\\",\\\"timestamp\\\":1646762189089,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646762189089,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Responsibility Contexts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\""
		":\\\"#ResponsibilityContext-manage\\\",\\\"appId\\\":\\\"#ResponsibilityContext-manage\\\",\\\"timestamp\\\":1646762098347,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646762098347,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true}]}\",\"id\":\"RecentActivity\",\"category\":\"I\",\"containerId\":\"sap.ushell.services.UserRecents\",\"containerCategory\":\"U\"}]}" ;
 
const char * const body_variable_2 = "Body={\"__metadata\":{\"id\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='sap.ushell.services.UserRecents',category='U')\",\"uri\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='sap.ushell.services.UserRecents',category='U')\",\"type\":\"INTEROP.PersContainer\"},\"id\":\"sap.ushell.services.UserRecents\",\"category\":\"U\",\"validity\":0,\"clientExpirationTime\":\"\\/Date(253373472000000)\\/\",\"component\":\"\",\"appName\":\"\",\"PersContainerItems\":[{\"value\":\"{\\\"recentDay\\\":\\\"2025/5/9\\\",\\\"recentUsageArray\\\":[{\\\"oItem\\\":{\\\"title\\\":\\\"Display Sales Orders - VA03\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-display?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesDocument-display\\\",\\\"timestamp\\\":1746768333404,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746768333404,\\\"aUsageArray\\\":[2,0,0,1,0,0,1,4,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,7,1,2],\\\"iCount"
		"\\\":20,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"VA03\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"VA03\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746767595105,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746767595105,\\\"aUsageArray\\\":[1],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va03\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\""
		":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"va03\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746737350545,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746737350545,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,2,0],\\\"iCount\\\":11,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Order\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Order\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":"
		"\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746641198944,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746641198944,\\\"aUsageArray\\\":[5,0,0],\\\"iCount\\\":5,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Outbound Delivery - With Order Reference\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-createInWebGUI\\\",\\\"timestamp\\\":1746641034498,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746641034498,\\\"aUsageArray\\\":[6,1,0,0,0,1,0,0,0,1,0,3,3,0,2,0,0,0,1,0,0,5,8,0,0,0,5,5,0,0],\\\"iCount\\\":41,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrderItem-analyzeItemChanges?EvaluationId=.E.1541571104021\\\",\\\"appId\\\":\\\"#PurchaseOrderItem-analyzeItemChanges\\\",\\\"timestamp\\\""
		":1746641017123,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746641017123,\\\"aUsageArray\\\":[1,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-ssb_Backorders?EvaluationId=.E.1478697190095\\\",\\\"appId\\\":\\\"#SalesOrder-ssb_Backorders\\\",\\\"timestamp\\\":1746640955587,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746640955587,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Sales Order Items - Due for Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createForSOItemsInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-createForSOItemsInWebGUI\\\",\\\"timestamp\\\":1746640913609,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746640913609,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,1,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Order\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"/nva03\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746640898683,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746640898683,\\\"aUsageArray\\\":[2,0,0],\\\"iCount\\\":2,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vf01\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\"
		"\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vf01\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746622233113,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746622233113,\\\"aUsageArray\\\":[12,2,0,0,0,2,0,0,0,2,0,4,6,0,4,0,0,0,2,0,0,0,12,0,0,0,11,4,0,0],\\\"iCount\\\":61,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Billing Documents - VF01\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-createBillingDocuments?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BillingDocument-createBillingDocuments\\\",\\\"timestamp\\\":1746616541926,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746616541926,\\\"aUsageArray\\\":[6,1,0,0,0,1,0,0,0,1,0,2,3,0,2,0,0,0,1,0,0,0,6,"
		"0,0,0,8,2,0,0],\\\"iCount\\\":33,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vl02n\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl02n\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746616522923,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746616522923,\\\"aUsageArray\\\":[12,2,0,0,0,2,0,0,0,2,0,5,6,0,4,0,0,0,2,0,0,0,13,0,0,0,9,7,0,0],\\\"iCount\\\":64,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-changeInWebGUI?sap-ui-tech-hi"
		"nt=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-changeInWebGUI\\\",\\\"timestamp\\\":1746616494946,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746616494946,\\\"aUsageArray\\\":[6,1,0,0,0,1,0,0,0,1,0,3,3,0,2,0,0,0,1,0,0,0,7,0,0,0,5,4,0,0],\\\"iCount\\\":34,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vl01n\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl01n\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746616475984,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746616475984,\\\"aUsageArray\\\":[12,2,0,0,0,2,0,0,0,2,0,6,6"
		",0,4,0,0,0,2,0,0,8,16,0,0,0,10,8,0,0],\\\"iCount\\\":78,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"VA01\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"VA01\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746616433164,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746616433164,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,2,0,0],\\\"iCount\\\":12,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Orders - VA01\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-create?sap"
		"-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesDocument-create\\\",\\\"timestamp\\\":1746616375342,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1746616375342,\\\"aUsageArray\\\":[8,3,1,1,1,1,0,0,0,1,1,4,3,0,2,11,2,2,2,1,0,3,8,2,1,0,7,4,0,0],\\\"iCount\\\":69,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va01\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"va01\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1746613708084,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1746613708084,\\\"aUsageArray\\\":[16,2,1,2,0,2,0,0,0,2,1,7,6,"
		"0,4,11,2,2,3,1,0,6,16,2,0,0,2,6,0,0],\\\"iCount\\\":94,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Track Sales Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-trackStatus\\\",\\\"appId\\\":\\\"#SalesOrder-trackStatus\\\",\\\"timestamp\\\":1745617204753,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1745617204753,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Sales Orders - VA02\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-change?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesDocument-change\\\",\\\"timestamp\\\":1744892110172,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1744892110172,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\"
		"\"va02\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"va02\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1744892105211,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1744892105211,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Outbound Delivery - Without Order Reference\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createNoReferenceInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-createNoReferenceInWebGUI\\\",\\\"timestamp\\\":1744727454068,\\\"icon\\\":"
		"\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1744727454068,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manageV2\\\",\\\"appId\\\":\\\"#SalesOrder-manageV2\\\",\\\"timestamp\\\":1744623134154,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1744623134154,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":1,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"post incoming payments\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"p"
		"ost incoming payments\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1740152726160,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1740152726160,\\\"aUsageArray\\\":[4,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":6,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Post Incoming Payments - For Customers\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-postIncomingPayment?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Customer-postIncomingPayment\\\",\\\"timestamp\\\":1740152632570,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1740152632570,\\\"aUsageArray\\\":[2,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":3,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Invoice Lists\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InvoiceList-display?sap-ui-tech-h"
		"int=GUI\\\",\\\"appId\\\":\\\"#InvoiceList-display\\\",\\\"timestamp\\\":1739230510473,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1739230510473,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vl01n\\\",\\\"url\\\":\\\"#Action-search&/top=10&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"All\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"All\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"All\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl01n\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1738907766361,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1738907766361,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Outbound Deliveries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createFromDueList\\\",\\\"appId\\\":\\\"#OutboundDelivery-createFromDueList\\\",\\\"timestamp\\\":1736442872016,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1736442872016,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbound Delivery Monitor\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InboundDelivery-monitoringInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#InboundDelivery-monitoringInWebGUI\\\",\\\"timestamp\\\":1735570193686,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1735570193686,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders\\\",\\"
		"\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manage&/?sap-iapp-state--history=TASH9MYI98H9N4IQB5FTVYWLYALUE29HILEP61G0S&sap-iapp-state=TASWIATNWDTHS7831G5GS29P39G3O71S44YLX7M6P\\\",\\\"appId\\\":\\\"#SalesOrder-manage\\\",\\\"timestamp\\\":1734617772842,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1734617772842,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Analyze Delivery Logs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-analyseProcessingLogs?CollectiveProcessing=91026&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#OutboundDelivery-analyseProcessingLogs\\\",\\\"timestamp\\\":1734617713304,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1734617713304,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appT"
		"ype\\\":\\\"Application\\\",\\\"url\\\":\\\"#DeliveryApplicationJob-scheduleOutbDlvCreation?JobCatalogEntryName=SAP_LCM_LE_RVV50R10A%2C%20SAP_LCM_LE_RVV50R10C_J002&sap-ach=LE-SHP-GF-JS&sap-app-origin-hint=&sap-fiori-id=F2228&/v4_JobRunCreate\\\",\\\"appId\\\":\\\"#DeliveryApplicationJob-scheduleOutbDlvCreation\\\",\\\"timestamp\\\":1734617693704,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1734617693704,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va001\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"va001\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\""
		"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1734533136795,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1734533136795,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"vl02\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl02\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1733413616754,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1733413616754,\\\"aUsageArray\\\":"
		"[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"*\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"*\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1733152900227,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1733152900227,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocu"
		"ment-create\\\",\\\"appId\\\":\\\"#BillingDocument-create\\\",\\\"timestamp\\\":1729701581222,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1729701581222,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Credit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CreditMemoRequest-display?CreditMemoRequest=60000155&OverallSDProcessStatusDesc=Open&P_DisplayCurrency=USD&SalesOrganization=1710&TotalNetAmount=0.00&TransactionCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASVWP57R15E7S3BQEWCFAR3VOHSUEK1SEVTZXSUS\\\",\\\"appId\\\":\\\"#CreditMemoRequest-display\\\",\\\"timestamp\\\":1712666551699,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712666551699,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Sales Overview\\\""
		",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InternalSales-displayOverviewPage\\\",\\\"appId\\\":\\\"#InternalSales-displayOverviewPage\\\",\\\"timestamp\\\":1712666536079,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712666536079,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Variant Configuration\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#VariantConfiguration-configureLegacy?draftKey=1D3BFE3F2C901EEEBCB28BEAEA6BD916&embeddedInWebGUI=false&objectKey=%20%20%20%20%20%20%20%20%20%20000010&sap-system=sid(S4H.100)&semanticObject=SalesOrder&uiMode=Create\\\",\\\"appId\\\":\\\"#VariantConfiguration-configureLegacy\\\",\\\"timestamp\\\":1712133042121,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712133042121,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\""
		":\\\"Change Material\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-change?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Material-change\\\",\\\"timestamp\\\":1712116611057,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712116611057,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"mm02\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"mm02mm02\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1712116607488,\\\"icon\\\":\\\"sap-icon:/"
		"/search\\\"},\\\"iTimestamp\\\":1712116607488,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Review Availability Check Result for SAPGUI\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ATPCheckResult-review?ATPCheckUUID=1D3BFE3F2C901EDEBCAD98808FC3504E&isEmbeddedInSAPGUIForHTML=true\\\",\\\"appId\\\":\\\"#ATPCheckResult-review\\\",\\\"timestamp\\\":1712116005729,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712116005729,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Sales Order - VA03\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-display?%24.basicSearch=&DeliveryBlockReason=&HeaderBillingBlockReason=&PurchaseOrderByCustomer=11223344&RequestedDeliveryDate=2022-11-24T00%3A00%3A00.000Z&SalesOrder=5126&SalesOrderDate=2022-11-24T00%3A00%3A00.000Z&"
		"SalesOrganization=1710&SoldToParty=USCU_S01&SoldToPartyName=Performance%20Bikes&TotalNetAmount=80000.00&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TASNM28E9A8AZ6CD1D66W3KQVCDS2R3UCVINSGEPV\\\",\\\"appId\\\":\\\"#SalesOrder-display\\\",\\\"timestamp\\\":1712114466579,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712114466579,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoices List\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-list1\\\",\\\"appId\\\":\\\"#SupplierInvoice-list1\\\",\\\"timestamp\\\":1712106693144,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1712106693144,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Import Sales Contracts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-imp"
		"ort?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesContract-import\\\",\\\"timestamp\\\":1711716800154,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711716800154,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Import Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-import\\\",\\\"appId\\\":\\\"#SalesDocument-import\\\",\\\"timestamp\\\":1711716703074,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711716703074,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Import Sales Quotations\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-import?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesQuotation-import\\\",\\\"timestamp\\\":1711702423463,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711702423463"
		",\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Contract - VA43\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-display?SalesContract=40000029&sap-app-origin-hint=&sap-xapp-state=TASDEPUYBU5SIYAFRCMZ8NFDQQILF9DRRBNBWXLZR\\\",\\\"appId\\\":\\\"#SalesContract-display\\\",\\\"timestamp\\\":1711701984560,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711701984560,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Contracts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-manage\\\",\\\"appId\\\":\\\"#SalesContract-manage\\\",\\\"timestamp\\\":1711701136952,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711701136952,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":"
		"0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-manage?sap-app-origin-hint=&sap-xapp-state=TAS36KFLYXQZLNQOX93CTLC9YTEFEG3UO896GB2I4&/object/display/90004947\\\",\\\"appId\\\":\\\"#BillingDocument-manage\\\",\\\"timestamp\\\":1711700753910,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711700753910,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Management Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Sales-displayOverviewPage\\\",\\\"appId\\\":\\\"#Sales-displayOverviewPage\\\",\\\"timestamp\\\":1711659278335,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711659278335,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Overdue Purchase Order"
		" Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrderItem-analyzeOverduePurOrdItems?EvaluationId=.SAP.MM.PUR.OVERDUEPO\\\",\\\"appId\\\":\\\"#PurchaseOrderItem-analyzeOverduePurOrdItems\\\",\\\"timestamp\\\":1711658873803,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658873803,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Timesheet Analytics - My Activities\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Employee-analyzeActivities\\\",\\\"appId\\\":\\\"#Employee-analyzeActivities\\\",\\\"timestamp\\\":1711658732393,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658732393,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Team Calendar\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Employee-displayCalendar\\\",\\\"appId"
		"\\\":\\\"#Employee-displayCalendar\\\",\\\"timestamp\\\":1711658720767,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658720767,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Learning\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Employee-startLearning\\\",\\\"appId\\\":\\\"#Employee-startLearning\\\",\\\"timestamp\\\":1711658698821,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658698821,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Search Courses\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Employee-searchCourses\\\",\\\"appId\\\":\\\"#Employee-searchCourses\\\",\\\"timestamp\\\":1711658681301,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711658681301,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Outbound Deliveries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-manage&/?sap-iapp-state--history=TAS366WWJ8DDICYHZ435T7FUNT595XUX1O4FJ6Y5Y&sap-iapp-state=TAST33Z2TP8ZDM2D29SLSCH0LVX22KZ78XM12CFZF\\\",\\\"appId\\\":\\\"#OutboundDelivery-manage\\\",\\\"timestamp\\\":1711655725628,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711655725628,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Pick Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-pick?%23=&sap-app-origin-hint=&/DeliveryHeader'(80003710)'\\\",\\\"appId\\\":\\\"#OutboundDelivery-pick\\\",\\\"timestamp\\\":1711655719146,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711655719146,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-displayFactSheet?sap-app-origin-hint=&/C_OutboundDeliveryFs('80003712')\\\",\\\"appId\\\":\\\"#OutboundDelivery-displayFactSheet\\\",\\\"timestamp\\\":1711655572313,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711655572313,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Order-to-Cash Performance Monitoring\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OrderToCashPerformanceKPI-displayOverviewPage\\\",\\\"appId\\\":\\\"#OrderToCashPerformanceKPI-displayOverviewPage\\\",\\\"timestamp\\\":1711654941242,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654941242,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\""
		"title\\\":\\\"Order-to-Cash Performance - Time Series\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OrderToCashPerformanceKPI-executeAPFConfigurationS4HANATotal?P_NumberOfEvaluationMonths=2&ProcObsvrKPIDefDesc=Orders%20Delivered&YearMonth=202403&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS6SACGERBHFKX75YA65VO95PKFJI2DKCZ1SIY9G\\\",\\\"appId\\\":\\\"#OrderToCashPerformanceKPI-executeAPFConfigurationS4HANATotal\\\",\\\"timestamp\\\":1711654934473,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654934473,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"List Incomplete Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-listIncompleteDocuments?sap-xapp-state=TASVPGH1WN2YLY1I39XNLWVLQMRV1Z3Q91JJ0ET6Q&/?sap-iapp-state--history=TASPM0CH738ML37IL0BGT3Y9DT6DU2XE81UY44WG6&sap-iapp-state=TASXJSSE8DK5ENTS13NKVM6C3RVTDWCUWPL0D8F3Y\\"
		"\",\\\"appId\\\":\\\"#SalesDocument-listIncompleteDocuments\\\",\\\"timestamp\\\":1711654677642,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654677642,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Complete Missing Data\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-incompletionLog?SalesDocument=20000744&sap-app-origin-hint=&sap-xapp-state=TASUTW8GEKBEMRRSXPO1YMDFA49ITL07G9INZJLL1\\\",\\\"appId\\\":\\\"#SalesDocument-incompletionLog\\\",\\\"timestamp\\\":1711654623145,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654623145,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"General Ledger Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#GeneralLedgerOverview-display\\\",\\\"appId\\\":\\\"#GeneralLedgerOverview-display\\\","
		"\\\"timestamp\\\":1711654474596,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654474596,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Credit Memo Requests - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CreditMemoRequest-manageV2\\\",\\\"appId\\\":\\\"#CreditMemoRequest-manageV2\\\",\\\"timestamp\\\":1711654219908,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711654219908,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Incoming Sales Orders - Flexible Analysis\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-analyzeIncoming?P_DisplayCurrency=USD&P_ExchangeRateType=M&P_NumberOfMonths=12&SalesOrganization=1710&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS622BTDI0MEFWL332TM7R76DV4RVFOPYIMBAHPS\\\","
		"\\\"appId\\\":\\\"#SalesOrder-analyzeIncoming\\\",\\\"timestamp\\\":1711653993634,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711653993634,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"manage text\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"manage text\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1711549107473,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1711549107473,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"manage tax rates \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"manage tax rates \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1711541440712,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1711541440712,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingApplicationJ"
		"ob-scheduleOutputJobs?JobCatalogEntryName=BILLING_DOCUMENTS_OUTPUT_RUN\\\",\\\"appId\\\":\\\"#BillingApplicationJob-scheduleOutputJobs\\\",\\\"timestamp\\\":1711539927858,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711539927858,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-displayBillingDocument?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BillingDocument-displayBillingDocument\\\",\\\"timestamp\\\":1711487280437,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711487280437,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-editSalesOrderV2?SalesOrder=4622&sap-app-origin-hint"
		"=\\\",\\\"appId\\\":\\\"#SalesOrder-editSalesOrderV2\\\",\\\"timestamp\\\":1711486447321,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711486447321,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Track Sales Order Details\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manageFulfillment?%24.basicSearch=&FulfillmentProcessPhase=1&FulfillmentStatusInAccounting=0&FulfillmentStatusInDelivery=0&FulfillmentStatusInInvoice=0&FulfillmentStatusInOrder=4&FulfillmentStatusInSupply=0&FulfillmentStatusInTransit=0&OverallFulfillmentStatus=4&OverallSDProcessStatus=A&RequestedDeliveryDate=2021-11-19T00%3A00%3A00.000Z&SalesDocument=4622&SalesDocumentDate=2021-11-19T00%3A00%3A00.000Z&SemanticObject=SalesOrder&SoldToParty=17100001&SoldToPartyFullName=Domestic%20US%20Customer%201&TotalNetAmount=995000.00&TransactionCurrency=USD&preferredMode=display&sap-app-origin-hint=&sap-xapp-state=TA"
		"SNC7KKT5RC0BGO2PN2K4ZL0R1P28BYLHV3Y36W4&sap.suite.ui.generic.template.genericData=%5Bobject%20Object%5D&/Fulfillment/SalesDocument/4622/sNextLayout/TwoColumnsMidExpanded\\\",\\\"appId\\\":\\\"#SalesOrder-manageFulfillment\\\",\\\"timestamp\\\":1711486430914,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711486430914,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Sales Order - VA02\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-change?SalesOrder=4622&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-change\\\",\\\"timestamp\\\":1711486076807,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711486076807,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Orders - Actuals\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-"
		"analyzeActualsCDSQ?SalesOrder=4607&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-analyzeActualsCDSQ\\\",\\\"timestamp\\\":1711486041222,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711486041222,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Debit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DebitMemoRequest-change?DebitMemoRequest=70000014&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#DebitMemoRequest-change\\\",\\\"timestamp\\\":1711485883848,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711485883848,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"orders\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\"
		"\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"orders\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1711485180947,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1711485180947,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"orders\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"open orders\\\\\\\",\\\\\\"
		"\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1711484102478,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1711484102478,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order Fulfillment Issues\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderFulfillmentIssue-analyzeALPDetails?IsPotentialFutureIssue=0&IssueCategory=10_SO&IssueCategoryName=In%20Order&NmbrOfAllIssues=283&P_DisplayCurrency=USD&SalesOrganization=1710&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASUFXV09530I0QG9N7WGKZJOV2W2SN6LCF4LBNAW&/?sap-iapp-state--history=TAS77OWKPMQT79R3PTQKZ4UHX5D3MOQTDDPN208NC\\\",\\\"appId\\\":\\\"#SalesOrderFulfillmentIssue-analyzeALPDetails\\\",\\\"timestamp\\\":1711484000373,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":17"
		"11484000373,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"[Deprecated] Sales Order Fulfillment\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderFulfillmentIssue-ssb_Analyze?EvaluationId=.ECC.SOFM.SALESORDERFULFILLMENTISSUES.EV\\\",\\\"appId\\\":\\\"#SalesOrderFulfillmentIssue-ssb_Analyze\\\",\\\"timestamp\\\":1711479779321,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711479779321,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Audit Journal\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingJournalList-displayAuditJournal?CompanyCode=1710&GLAccountHierarchy=YPA2&Ledger=0L&NavToPage=JournalEntryHistory&P_DisplayCurrency=USD&P_KeyDate=2024-03-26T00%3A00%3A00.000&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASCC79HS0R2SZ74E81QN48V"
		"2CRPHD7BM21WU69LS&/JournalEntryHistory\\\",\\\"appId\\\":\\\"#AccountingJournalList-displayAuditJournal\\\",\\\"timestamp\\\":1711479344976,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711479344976,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Set My Location\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#EHSLocation-setMyLoc?sap-ui-tech-hint=WDA\\\",\\\"appId\\\":\\\"#EHSLocation-setMyLoc\\\",\\\"timestamp\\\":1711472190934,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711472190934,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Invoice Lists\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InvoiceList-manage\\\",\\\"appId\\\":\\\"#InvoiceList-manage\\\",\\\"timestamp\\\":1711467681747,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestam"
		"p\\\":1711467681747,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingApplicationJob-scheduleReleaseJobs?JobCatalogEntryName=BILLING_RELEASE_RUN&/v4_JobRunList\\\",\\\"appId\\\":\\\"#BillingApplicationJob-scheduleReleaseJobs\\\",\\\"timestamp\\\":1711457779361,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711457779361,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingApplicationJob-scheduleCreationJobs?JobCatalogEntryName=BILLING_DOCUMENT_RUN\\\",\\\"appId\\\":\\\"#BillingApplicationJob-scheduleCreationJobs\\\",\\\"timestamp\\\":1711456884900,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711456884900,\\\"aUsageAr"
		"ray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Value Chains\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ValueChainInstance-monitor\\\",\\\"appId\\\":\\\"#ValueChainInstance-monitor\\\",\\\"timestamp\\\":1711183454780,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711183454780,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoice\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-display?FiscalYear=2024&SupplierInvoice=5100001350&sap-app-origin-hint=&sap-xapp-state=TASEBGSDBZTZO96J1V647Z8LW8IHL3XM4XXU6KIW2\\\",\\\"appId\\\":\\\"#SupplierInvoice-display\\\",\\\"timestamp\\\":1711181984705,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711181984705,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],"
		"\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Outbound Delivery Monitor\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-monitoringInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-monitoringInWebGUI\\\",\\\"timestamp\\\":1711177912981,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711177912981,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Predicted Delivery Delay\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manageDelay?sap-keep-alive=restricted&sap-xapp-state=TASWOR2PMVEFGUI87ILOPSYO6FLCU567HVF6SOZ8C\\\",\\\"appId\\\":\\\"#SalesOrder-manageDelay\\\",\\\"timestamp\\\":1711176510709,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711176510709,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{"
		"\\\"title\\\":\\\"Create Sales Order - VA01\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-create\\\",\\\"timestamp\\\":1711174674160,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711174674160,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Product Availability\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-analyzeAvailability?Material=TG-DATP&SupplyingPlant=1710&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#Material-analyzeAvailability\\\",\\\"timestamp\\\":1711044191705,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711044191705,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Complete Missing Data\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOr"
		"der-incompletionLog?SalesOrder=5144&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-incompletionLog\\\",\\\"timestamp\\\":1711044010115,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711044010115,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Journal Entries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocument-manage?AccountingDocument=9400000034&CompanyCode=1710&FiscalYear=2024&sap-app-origin-hint=&/detail/1710/2024/9400000034\\\",\\\"appId\\\":\\\"#AccountingDocument-manage\\\",\\\"timestamp\\\":1711042599149,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711042599149,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Correspondence\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Correspondence-create?params=%7B%22Cor"
		"respondences%22%3A%5B%7B%22Id%22%3A%22MJE_Correspondences%22%2C%22DocumentNumber%22%3A%229400000034%22%2C%22CompanyCode%22%3A%221710%22%2C%22FiscalYear%22%3A%222024%22%7D%5D%2C%22Settings%22%3A%7B%22TriggerPreview%22%3Afalse%7D%7D&sap-app-origin-hint=&sap-navigation-scope-filter=F0717&sap-xapp-state=TASRDRU8LXW8DHJBD44HSQAGGALNE7S0VZN3LO6Q3\\\",\\\"appId\\\":\\\"#Correspondence-create\\\",\\\"timestamp\\\":1711042585076,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1711042585076,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Multi-Dimensional Web Dynpro Report\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AnalyticQuery-analyze?bsa_query=2CCSDSALESVLMQ&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#AnalyticQuery-analyze\\\",\\\"timestamp\\\":1710952297725,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710952297725,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Query Browser\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AnalyticQuery-browse\\\",\\\"appId\\\":\\\"#AnalyticQuery-browse\\\",\\\"timestamp\\\":1710952231174,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710952231174,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Post Customer Payment\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-postPayment\\\",\\\"appId\\\":\\\"#Customer-postPayment\\\",\\\"timestamp\\\":1710275678455,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710275678455,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Incoming Sales Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-incoming&/?sap-iapp-"
		"state--history=TASJI21H1CF1F4EKC243K5BL6HQDY22LVM02MKK25&sap-iapp-state=TASLMUZ7NRLSRLNT14JGEVPFIVMRBW0PACNM07AO1\\\",\\\"appId\\\":\\\"#SalesOrder-incoming\\\",\\\"timestamp\\\":1710274789664,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710274789664,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"incom\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"incom\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1710274632437,\\\"icon\\\":\\\"sap-icon:"
		"//search\\\"},\\\"iTimestamp\\\":1710274632437,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Post Outgoing Payments\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Supplier-postPayment\\\",\\\"appId\\\":\\\"#Supplier-postPayment\\\",\\\"timestamp\\\":1710271737607,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710271737607,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-manageSalesOrderV2?preferredMode=create&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-manageSalesOrderV2\\\",\\\"timestamp\\\":1710168168338,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710168168338,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\""
		"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Customer Returns\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-manage?P_DisplayCurrency=USD&SalesOrganization=1710&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS6EO2ZRIBTKUE4HU5AGK8R33ZBNRCW37V8PGDKY\\\",\\\"appId\\\":\\\"#CustomerReturn-manage\\\",\\\"timestamp\\\":1710167533675,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1710167533675,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Predictive Scenarios\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PredictiveScenario-manage\\\",\\\"appId\\\":\\\"#PredictiveScenario-manage\\\",\\\"timestamp\\\":1709313364423,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1709313364423,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"o"
		"Item\\\":{\\\"title\\\":\\\"Manage SA Delivery Schedule\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseSchedulingAgreement-maintainDeliverySchedule?sap-ui-tech-hint=GUI&/?sap-iapp-state=TASDBHZ1AS73WROJF4LEIG9JI4E4LB9LN9GX7LDSR\\\",\\\"appId\\\":\\\"#PurchaseSchedulingAgreement-maintainDeliverySchedule\\\",\\\"timestamp\\\":1709313351879,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1709313351879,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"My Inbox\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"My Inbox\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type"
		"\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1709312713698,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1709312713698,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage SA Delivery Schedule\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Procurement-displayOverviewPage\\\",\\\"appId\\\":\\\"#Procurement-displayOverviewPage\\\",\\\"timestamp\\\":1709312428297,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1709312428297,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage KPIs and Reports\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AnalyticObject-manage\\\",\\\"appId\\\":\\\"#AnalyticObject-manage\\\",\\\"timestamp\\\":1701375727090,\\\"icon\\\":\\\"sap-icon:/"
		"/product\\\"},\\\"iTimestamp\\\":1701375727090,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage KPIs and Reports\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CDSView-browse\\\",\\\"appId\\\":\\\"#CDSView-browse\\\",\\\"timestamp\\\":1701375716378,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1701375716378,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OrderToCashPerformanceKPI-analyzeSBKPIDetailsS4HANA?EvaluationId=.SAP.POC.O2C.PERF.O2C_1.1\\\",\\\"appId\\\":\\\"#OrderToCashPerformanceKPI-analyzeSBKPIDetailsS4HANA\\\",\\\"timestamp\\\":1700473231240,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700473231240,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Sales Performance\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Sales Performance\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1700473118297,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1700473118297,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Performance - Plan/Actual\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesPlan-ana"
		"lyzeSalesPerformance\\\",\\\"appId\\\":\\\"#SalesPlan-analyzeSalesPerformance\\\",\\\"timestamp\\\":1700473072540,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700473072540,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Sales Performance - Plan/Actual \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Sales Performance - Plan/Actual \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1700473062889,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimest"
		"amp\\\":1700473062889,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Plans\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesPlan-manage\\\",\\\"appId\\\":\\\"#SalesPlan-manage\\\",\\\"timestamp\\\":1700472800086,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700472800086,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Contract - VA41\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesContract-create\\\",\\\"timestamp\\\":1700471402546,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700471402546,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Purchase "
		"Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-manage?PurchaseOrder=4500001811&sap-app-origin-hint=&sap-xapp-state=TASK86IY9WBJE9O513L93800NZQCQX1Z6KZLC5109&/C_PurchaseOrderTP(PurchaseOrder='4500001811',DraftUUID=guid'00000000-0000-0000-0000-000000000000',IsActiveEntity=true)/?sap-iapp-state--history=TASJVX7C22IMSDPC8DYTA9J7HFXQ6TT9RDKPVFTDX&sap-iapp-state-C_PurchaseOrderTP=TASQDBIQDYQPK30V4C67IDPUSQB3LLT1KG739TGKY\\\",\\\"appId\\\":\\\"#PurchaseOrder-manage\\\",\\\"timestamp\\\":1700454369425,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700454369425,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Purchase Order Advanced\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-display?PurchaseOrder=4500001811&sap-app-origin-hint=&sap-xapp-state=TASN52RZ2A2G2N4RRFY24X2CZHB6DVZOH82IN9M1A&uitype=advanced\\\",\\\"appId\\\":\\\"#PurchaseOr"
		"der-display\\\",\\\"timestamp\\\":1700454300613,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700454300613,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"wkm4\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"wkm4\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1700453784312,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1700453784312,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,"
		"\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Process Purchase Requisitions\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-manage?source=lpd\\\",\\\"appId\\\":\\\"#PurchaseRequisition-manage\\\",\\\"timestamp\\\":1700161017764,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1700161017764,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoice\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-create\\\",\\\"appId\\\":\\\"#SupplierInvoice-create\\\",\\\"timestamp\\\":1699806904998,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699806904998,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Purchase Requisition\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-displayAdvan"
		"ced?PurchaseRequisition=10001441&sap-app-origin-hint=&uitype=advanced\\\",\\\"appId\\\":\\\"#PurchaseRequisition-displayAdvanced\\\",\\\"timestamp\\\":1699806697733,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699806697733,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Purchase Requisitions - Professional\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-maintain?DraftUUID=00000000-0000-0000-0000-000000000000&IsActiveEntity=true&PurchaseRequisition=10001441&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#PurchaseRequisition-maintain\\\",\\\"timestamp\\\":1699806675140,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699806675140,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Credit Memo Request\\\",\\\"appType\\\":\\\"Application\\"
		"\",\\\"url\\\":\\\"#CreditMemoRequest-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#CreditMemoRequest-create\\\",\\\"timestamp\\\":1699805519385,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699805519385,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Credit Memo Requests\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CreditMemoRequest-manage\\\",\\\"appId\\\":\\\"#CreditMemoRequest-manage\\\",\\\"timestamp\\\":1699805510014,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699805510014,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Debit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DebitMemoRequest-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#DebitMemoRequest-create\\\",\\\"timestamp\\\":1699804569505,\\\"icon"
		"\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699804569505,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Debit Memo Requests\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DebitMemoRequest-manage\\\",\\\"appId\\\":\\\"#DebitMemoRequest-manage\\\",\\\"timestamp\\\":1699804461061,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699804461061,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"mdg_monitor_cr_procestime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Shell-startWDA?sap-system=LOCAL&sap-ui2-wd-app-id=mdg_monitor_cr_procestime\\\",\\\"appId\\\":\\\"#Shell-startWDA\\\",\\\"timestamp\\\":1699527298643,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699527298643,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"CMS_WB\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Shell-startGUI?sap-system=LOCAL&sap-ui2-tcode=CMS_WB\\\",\\\"appId\\\":\\\"#Shell-startGUI\\\",\\\"timestamp\\\":1699526905925,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699526905925,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Process Purchase Requisitions - Formerly Manage Purchase Requisitions \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Process Purchase Requisitions - Formerly Manage Purchase Requisitions \\\\\\\",\\\\\\"
		"\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1699367433438,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1699367433438,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Quotations\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-manage\\\",\\\"appId\\\":\\\"#SalesQuotation-manage\\\",\\\"timestamp\\\":1699364700461,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699364700461,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Quotations - VA21\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesQuotation-create\\\",\\\"timestamp\\\":"
		"1699364364025,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699364364025,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Customer Return\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-change?%24.basicSearch=&CustReturnRefundStatus=&CustReturnRefundStatusDesc=&Customer=17100003&CustomerReturn=60000217&CustomerReturnDate=2023-11-06T00%3A00%3A00.000Z&CustomerReturnType=KRZU&OvrlReldForSubsqntProcgSts=&OvrlReldForSubsqntProcgStsDesc=Not%20Relevant&ReferenceSDDocument=30000015&ReferenceSDDocumentCategory=F&RetsMgmtCompnProcgStatus=&RetsMgmtIsActive=&ReturnReason=No%20Return%20Reason&SalesDocApprovalStatus=&SalesDocumentTypeName=CsgmtReturnSchedAgr&SalesOrganization=1710&SoldToPartyName=Domestic%20Customer%20US%203&WorkflowIsExternal=false&sap-app-origin-hint=&sap-xapp-state=TAS09NHFR8LVOZPIQJNWAY545FXOOC8WLWY6ZVEMY\\\",\\\"appId\\\":\\\"#CustomerReturn-change\\"
		"\",\\\"timestamp\\\":1699299315724,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699299315724,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Customer Return\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-display?CustomerReturn=200000013&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#CustomerReturn-display\\\",\\\"timestamp\\\":1699298714727,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699298714727,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Scheduling Agreements\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesSchedulingAgreement-create?%24.basicSearch=&SalesOrganization=1710&sap-app-origin-hint=&sap-xapp-state=TASBY1ZPIY24899LX8GZV0S70ZBJQL8IZ78MJ63Q8\\\",\\\"appId\\\":\\\"#SalesSchedulingAgreement-create"
		"\\\",\\\"timestamp\\\":1699295713595,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699295713595,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Scheduling Agreements\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesSchedulingAgreement-manage&/?sap-iapp-state--history=TAS8DNQ89DMQ84LHN2478KLUTAFHYX69THF76PF11\\\",\\\"appId\\\":\\\"#SalesSchedulingAgreement-manage\\\",\\\"timestamp\\\":1699295689225,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1699295689225,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Create T*\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\"
		"\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Create T*\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1699264198295,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1699264198295,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Post Goods Movement\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-postGoodsMovementInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Material-postGoodsMovementInWebGUI\\\",\\\"timestamp\\\":1698944824048,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698944824048,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\""
		"Manage Customer Materials\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerMaterialInformation-manage\\\",\\\"appId\\\":\\\"#CustomerMaterialInformation-manage\\\",\\\"timestamp\\\":1698944628340,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698944628340,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Scheduling Agreements - Product Demand\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesSchedulingAgreement-analyzeDemand\\\",\\\"appId\\\":\\\"#SalesSchedulingAgreement-analyzeDemand\\\",\\\"timestamp\\\":1698944418431,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698944418431,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-ssb_Contract_Fu"
		"lfillmentRates?EvaluationId=.E.1448335534743\\\",\\\"appId\\\":\\\"#SalesContract-ssb_Contract_FulfillmentRates\\\",\\\"timestamp\\\":1698943978178,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698943978178,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-ssb_Quotation_ConversionRates?EvaluationId=.E.1454048205686\\\",\\\"appId\\\":\\\"#SalesQuotation-ssb_Quotation_ConversionRates\\\",\\\"timestamp\\\":1698943949422,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698943949422,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Returns Order\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReturnsOrder-edit?sap-app-origin-hint=&/CustomerReturn/60000211\\\",\\\"appId\\\":"
		"\\\"#ReturnsOrder-edit\\\",\\\"timestamp\\\":1698938500546,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698938500546,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Returns Order from Reference Document\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReturnsOrder-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#ReturnsOrder-create\\\",\\\"timestamp\\\":1698936517124,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698936517124,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Create Billing Documents \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\"
		"\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Create Billing Documents \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698931087380,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698931087380,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Logistics Tracking \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Logistics Tracking \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\"
		"\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698919639168,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698919639168,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"*Search*\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Search\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698909043932,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698909043932,\\"
		"\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Search\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Search Accounts*\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698909011209,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698909011209,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"t"
		"itle\\\":\\\"Manage Customer Returns \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Manage Customer Returns \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698838782630,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698838782630,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#WorkflowTask-displayInbox?allItems=true\\\",\\\"appId\\\":\\\"#WorkflowTask-displayInbox\\\",\\\"timestamp\\\":1698833443555,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"i"
		"Timestamp\\\":1698833443555,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"my inbox\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"my inbox\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698833439394,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698833439394,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order\\\",\\\"appType\\\""
		":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-displayFactSheet?sap-app-origin-hint=&/C_Salesorderfs('5496')\\\",\\\"appId\\\":\\\"#SalesOrder-displayFactSheet\\\",\\\"timestamp\\\":1698785658717,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698785658717,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"delivery\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"delivery\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698784657081,\\\"icon\\\":\\"
		"\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698784657081,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Manage Sourcing Projects \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Manage Sourcing Projects \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698750279224,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698750279224,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{"
		"\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"mmbe\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"mmbe\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698731148539,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698731148539,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Orders Without Charge\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderWithoutCharge-manage&/?sap-iapp-state--history=TASDTPB1M99Y4FS49F6MIFLKGPWHENJP82A1UH93"
		"K&sap-iapp-state=TAS583H4DDW9OPQC1OT1WP4G4700BXMREU6ADU5G1\\\",\\\"appId\\\":\\\"#SalesOrderWithoutCharge-manage\\\",\\\"timestamp\\\":1698677502360,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698677502360,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Order Without Charge\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderWithoutCharge-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrderWithoutCharge-create\\\",\\\"timestamp\\\":1698677289123,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698677289123,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Debit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DebitMemoRequest-display?%24.basicSearch=&BillingDocumentDate=2023-10-30T00%3A00%3A00.000Z&DebitMe"
		"moRequest=70000027&DebitMemoRequestDate=2023-10-30T00%3A00%3A00.000Z&HeaderBillingBlockReason=Y9&OverallOrdReltdBillgStatus=A&PurchaseOrderByCustomer=Test%20Debit%20Memo%20Request%20(DR)&SalesOrganization=1710&SoldToParty=17100001&SoldToPartyName=Domestic%20US%20Customer%201&TotalNetAmount=35.10&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TASQE1K9HNM040US9B43NDNPU9JWSFSARKEACOZ06\\\",\\\"appId\\\":\\\"#DebitMemoRequest-display\\\",\\\"timestamp\\\":1698672717251,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698672717251,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Stock - Single Material\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-displayStockOverview\\\",\\\"appId\\\":\\\"#Material-displayStockOverview\\\",\\\"timestamp\\\":1698412356559,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698412356559,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Stock\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Stock\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698412343290,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698412343290,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Stock - Multiple Materials\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-displayS"
		"tockMultipleMaterials&/?sap-iapp-state--history=TASYD8A1Z1CVV2PUQ0PIG218FZF0YU52DKGZQBGHC\\\",\\\"appId\\\":\\\"#Material-displayStockMultipleMaterials\\\",\\\"timestamp\\\":1698411633891,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698411633891,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Stock \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"mb52\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698411616369,\\\"icon\\\":\\\"sap-icon://sea"
		"rch\\\"},\\\"iTimestamp\\\":1698411616369,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"va01\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"vl06o\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698411190090,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698411190090,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Customer Return\\\",\\\""
		"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-displayFactSheet?sap-app-origin-hint=&/C_Customerreturnfs('60000206')\\\",\\\"appId\\\":\\\"#CustomerReturn-displayFactSheet\\\",\\\"timestamp\\\":1698326936188,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698326936188,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Stock - Multiple Materials \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Stock - Multiple Materials \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions"
		"\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698309184068,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698309184068,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Manage Outbound Deliveries - VL06O \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Manage Outbound Deliveries - VL06O \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698308794446,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698308794446,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox - Business Partner Governance\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MDGovWorkflowTask-displayMyInbox\\\",\\\"appId\\\":\\\"#MDGovWorkflowTask-displayMyInbox\\\",\\\"timestamp\\\":1698233527792,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698233527792,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"My Inbox \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"My Inbox \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"C"
		"omplex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698233522933,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698233522933,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-displayInbox?fullWidth=true&scenarioId=SD_APPROVAL_INBOX&showAdditionalAttributes=true\\\",\\\"appId\\\":\\\"#SalesDocument-displayInbox\\\",\\\"timestamp\\\":1698233520860,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1698233520860,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"My Inbox \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\"
		"\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"My Inbox - All Items \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698232953070,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698232953070,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Custom logic \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Custo"
		"m Fields  \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1698221797363,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698221797363,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"Custom Fields  \\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"Custom Fields and Logic \\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\"
		"\":1698221788984,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1698221788984,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"appId\\\":\\\"#Action-search\\\",\\\"appType\\\":\\\"Search\\\",\\\"title\\\":\\\"credit limit\\\",\\\"url\\\":\\\"#Action-search&/top=20&filter={\\\\\\\"dataSource\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Category\\\\\\\",\\\\\\\"id\\\\\\\":\\\\\\\"$$APPS$$\\\\\\\",\\\\\\\"label\\\\\\\":\\\\\\\"Apps\\\\\\\",\\\\\\\"labelPlural\\\\\\\":\\\\\\\"Apps\\\\\\\"},\\\\\\\"searchTerm\\\\\\\":\\\\\\\"credit limit\\\\\\\",\\\\\\\"rootCondition\\\\\\\":{\\\\\\\"type\\\\\\\":\\\\\\\"Complex\\\\\\\",\\\\\\\"operator\\\\\\\":\\\\\\\"And\\\\\\\",\\\\\\\"conditions\\\\\\\":[]}}\\\",\\\"timestamp\\\":1697743879089,\\\"icon\\\":\\\"sap-icon://search\\\"},\\\"iTimestamp\\\":1697743879089,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":t"
		"rue},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#FinanceWorkflow-managePurchaseOrderAccrual?%2Fh4screen=WFPurchaseOrderAccrualsReview&ScenarioId=WS78500077\\\",\\\"appId\\\":\\\"#FinanceWorkflow-managePurchaseOrderAccrual\\\",\\\"timestamp\\\":1697652525365,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1697652525365,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"List Sales Orders - VA05\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-list?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesDocument-list\\\",\\\"timestamp\\\":1687968561697,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1687968561697,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Billing Document\\\",\\\"appType\\"
		"\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-displayFactSheet?BillingDocument=0090004714&sap-app-origin-hint=&sap-xapp-state=TASLRC7T2YB6AMIJ9KSIABOS9I6HV71Q9YK49H5E8\\\",\\\"appId\\\":\\\"#BillingDocument-displayFactSheet\\\",\\\"timestamp\\\":1687059478921,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1687059478921,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Journal Entries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocument-displayDocument?AccountingDocument=5100000002&Amount=1404.00&CompanyCode=1010&CompanyCodeName=Company%20Code%201010&CreatedBy=SAP_WFRT&CreatedByName=SAP_WFRT&Currency=EUR&DocumentDate=2023-06-17T00%3A00%3A00.000Z&FiscalYear=2023&Item=000000&ObjectType=Journal%20Entry&Processflowchildrennode=&Processflowlane=3&Processflownode=5100000002000001101020233&Processflownodedocument=5100000002&Processflownodefocus=&Processflowno"
		"depotype=3&Processflownodeshorttitle=&Processflownodestatus=Positive&Processflownodestatusdescripti=Free%20for%20payment&sap-intent-param=TAS6D12WNN9O3FJRH5SGDUP7VE9TNBOXUKKEE10J1\\\",\\\"appId\\\":\\\"#AccountingDocument-displayDocument\\\",\\\"timestamp\\\":1687058760490,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1687058760490,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Process Flow - Accounts Payable\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocument-displayProcessFlowAP?DocumentNumber=5100001248&DocumentType=2&FiscalYear=2023&sap-app-origin-hint=&sap-ushell-navmode=explace\\\",\\\"appId\\\":\\\"#AccountingDocument-displayProcessFlowAP\\\",\\\"timestamp\\\":1687058592891,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1687058592891,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"d"
		"esktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoice\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-process?%24.basicSearch=&CashDiscount1DueDate=2023-06-17T00%3A00%3A00.000Z&CompanyCode=1010&CompanyCodeName=Company%20Code%201010&DocumentCurrency=EUR&DocumentDate=2023-06-17T00%3A00%3A00.000Z&FiscalYear=2023&InvoiceGrossAmount=1404.00&InvoiceStatusAndOrigin=5&InvoiceStatusAndOrigin_Text=Posted&InvoicingParty=17401710&InvoicingPartyName=SAP%20SE&IsBlocked=false&PostingDate=2023-06-17T00%3A00%3A00.000Z&SupplierInvoice=5100001248&SupplierInvoiceIDByInvcgParty=90004713&SupplierInvoiceOrigin=M&SupplierInvoiceOriginDesc=Intercompany%20Supplier%20Invoice&SupplierInvoiceUUID=17c6065e-83a6-1eee-83b0-ae26d2932cc9&SupplierInvoiceWthnFiscalYear=5100001248%2F2023&sap-app-origin-hint=&sap-xapp-state=TASV048HCPLVDYTNE39G53KZMXU4G0FASK2QARF6F\\\",\\\"appId\\\":\\\"#SupplierInvoice-process\\\",\\\"timestamp\\\":1687058525710,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":"
		"1687058525710,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Accounting Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProfitabilityAnalysis-overview\\\",\\\"appId\\\":\\\"#ProfitabilityAnalysis-overview\\\",\\\"timestamp\\\":1685389493651,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1685389493651,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Date Functions\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DateFunction-manage\\\",\\\"appId\\\":\\\"#DateFunction-manage\\\",\\\"timestamp\\\":1684875956890,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1684875956890,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Goods Receipt"
		"\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductionOrder-createGR\\\",\\\"appId\\\":\\\"#ProductionOrder-createGR\\\",\\\"timestamp\\\":1684875804652,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1684875804652,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisitionItem-analyzeSBKPIDetailsS4HANA?P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASAVJR0O7424GYN53X51XZL10LX2AQQP9RDP4HMB\\\",\\\"appId\\\":\\\"#PurchaseRequisitionItem-analyzeSBKPIDetailsS4HANA\\\",\\\"timestamp\\\":1684875724333,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1684875724333,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\"
		"\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-analyzeNonManagedSpendSBKPI?DisplayCurrency=USD&MaterialGroup=&MaterialGroupName=Not%20assigned&NonManagedSpendAmount=3118119.80&NonManagedSpendAmount_F=%24%203%2C118%2C119.80&NonManagedSpendInPct=100&NonManagedSpendInPct_E=&NonManagedSpendInPct_F=100&P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&TotalSpendAmount=3119112.84&TotalSpendAmount_F=%24%203%2C119%2C112.84&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS51V9IJMC6OWOLLU50K24S027MQCLMSK678592B\\\",\\\"appId\\\":\\\"#PurchaseOrder-analyzeNonManagedSpendSBKPI\\\",\\\"timestamp\\\":1684873574207,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1684873574207,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Purchase Order\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-displayFactSheet?P"
		"urchaseOrder=4500001638&sap-app-origin-hint=&sap-xapp-state=TASW2XP65PLXC8S6RLVIG2CZGK3AP5R0E89GUI2OO\\\",\\\"appId\\\":\\\"#PurchaseOrder-displayFactSheet\\\",\\\"timestamp\\\":1679557453865,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679557453865,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-changeBillingDocument?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BillingDocument-changeBillingDocument\\\",\\\"timestamp\\\":1679527836349,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679527836349,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier Invoice\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-displayFactSheet?FiscalYear=2023&SupplierInv"
		"oice=5100001140&sap-app-origin-hint=&sap-xapp-state=TAS3TSDTPQQT7ZSAVSUVSV63R35CVHCJ6PXJH8TIS\\\",\\\"appId\\\":\\\"#SupplierInvoice-displayFactSheet\\\",\\\"timestamp\\\":1679527418796,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679527418796,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Non-Managed Spend\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-analyzeNonManagedSpend?EvaluationId=.SAP.MM.PUR.NONMANAGEDSPENDEVALUATION\\\",\\\"appId\\\":\\\"#PurchaseOrder-analyzeNonManagedSpend\\\",\\\"timestamp\\\":1679064951666,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679064951666,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Upload Supplier Invoices\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-upload\\\",\\\"appId"
		"\\\":\\\"#SupplierInvoice-upload\\\",\\\"timestamp\\\":1679064912954,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679064912954,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Invoice-analyzeAutomationRate?EvaluationId=.SAP.KPI.INVOICEAUTOMATIONRATE&/sap-iapp-state=TASUUJUXTNNCVSDCQJGZN26YGDJ7WR1VCQQ92F8YG\\\",\\\"appId\\\":\\\"#Invoice-analyzeAutomationRate\\\",\\\"timestamp\\\":1679064863095,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679064863095,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Supplier\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Supplier-displayFactSheet?CompanyCode=1710&FiscalYear=2022&InvoiceInboundEntryType=0&InvoiceInboundEntryType=1&Supplier=1730"
		"0001&SupplierInvoice=5100001031&SupplierInvoiceOrigin=&sap-app-origin-hint=&sap-xapp-state=TASJ3H4T0AWUQUYWGXW4XA68WLQE4ARPILR6KJ2ON\\\",\\\"appId\\\":\\\"#Supplier-displayFactSheet\\\",\\\"timestamp\\\":1679064861740,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679064861740,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Material Documents Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MaterialDocument-displayFactSheet?MaterialDocument=4900007297&MaterialDocumentYear=2023&sap-app-origin-hint=&sap-xapp-state=TASX8532N0PADB5A85TPKWSLO050OV4N2OVDUU642\\\",\\\"appId\\\":\\\"#MaterialDocument-displayFactSheet\\\",\\\"timestamp\\\":1679055660777,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1679055660777,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Ap"
		"plication Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPRun-schedule?JobCatalogEntryName=SAP_SCM_ATP_BOP_RUN\\\",\\\"appId\\\":\\\"#ABOPRun-schedule\\\",\\\"timestamp\\\":1678967002809,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1678967002809,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor BOP Run\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPRun-monitor?ShowLastRunsForVariant=CP_1710_2023&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#ABOPRun-monitor\\\",\\\"timestamp\\\":1678966945599,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1678966945599,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure BOP Variant\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPVariant-configure\\\",\\\"appId\\\":\\\"#ABOPVariant-co"
		"nfigure\\\",\\\"timestamp\\\":1678966848048,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1678966848048,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure BOP Segment\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ABOPSegment-configure\\\",\\\"appId\\\":\\\"#ABOPSegment-configure\\\",\\\"timestamp\\\":1678966578762,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1678966578762,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Customer Master\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-manage?BindingPeriodValidityStartDate=2021-10-28T00%3A00%3A00.000Z&Customer=17100001&DistributionChannel=10&HdrOrderProbabilityInPercent=0%25&OrganizationDivision=00&OverallSDDocReferenceStatus=&OverallSDDocumentRejectionSts=&OverallSDProcessStatus="
		"&PurchaseOrderByCustomer=1010&ResponsibleEmployee=0&ResponsibleEmployeeName=&SalesAreaDesc=Dom.%20Sales%20Org%20US%2C%20Direct%20Sales%2C%20Product%20Division%2000&SalesDocApprovalStatus=&SalesDocumentTypeName=Quotation%2020001937&SalesOrganization=1710&SalesQuotation=20001937&SalesQuotationApprovalReason=&SalesQuotationType=QT&SlsQtanApprovalStsCriticality=0&SoldToParty=17100001&SoldToPartyName=Domestic%20US%20Customer%201&TotalNetAmount=0.00&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TASPWGVFDWIMQPISA9PQ2TXY6AELSIE0KDEHN4DKB\\\",\\\"appId\\\":\\\"#Customer-manage\\\",\\\"timestamp\\\":1676410616743,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1676410616743,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Quotation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-displayFactSheet?AcademicTitleName=Mr.&CreatedByUser=S4H_SD&CreatedByUserFirstNa"
		"me=doe&CreatedByUserLastName=jean&PurchaseOrderByCustomer=1010&RequestedDeliveryDate=2021-10-28&SDDocumentCategory=B&SalesOrganization=1710&SalesOrganizationName=Dom.%20Sales%20Org%20US&SalesQuotation=0020001937&SalesQuotationNetAmount=0&ShipToParty=0017100001&ShipToPartyAdditionalName=&ShipToPartyName=Domestic%20US%20Customer%201&SoldToParty=0017100001&SoldToPartyAdditionalName=&SoldToPartyName=Domestic%20US%20Customer%201&TransactionCurrency=USD\\\",\\\"appId\\\":\\\"#SalesQuotation-displayFactSheet\\\",\\\"timestamp\\\":1676410594869,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1676410594869,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Customers Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-displaySalesOverviewPage\\\",\\\"appId\\\":\\\"#Customer-displaySalesOverviewPage\\\",\\\"timestamp\\\":1676408618804,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iT"
		"imestamp\\\":1676408618804,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Product Allocation Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocation-displayProductAllocationOverview\\\",\\\"appId\\\":\\\"#ProductAllocation-displayProductAllocationOverview\\\",\\\"timestamp\\\":1676398744477,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1676398744477,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Operational Supplier Evaluation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierPerformance-analyzeKPIDetailsS4HANA?P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASNSNP91OR08BQLR7AVPRL8CNALCID5NYB0BP5TB\\\",\\\"appId\\\":\\\"#SupplierPerformance-analyzeKPIDetailsS4HANA\\\","
		"\\\"timestamp\\\":1676398260986,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1676398260986,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-manageWorkflows?ScenarioId=WS00800238\\\",\\\"appId\\\":\\\"#PurchaseOrder-manageWorkflows\\\",\\\"timestamp\\\":1675794132009,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1675794132009,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-manageApprovalWorkflow\\\",\\\"appId\\\":\\\"#SalesDocument-manageApprovalWorkflow\\\",\\\"timestamp\\\":1675099147845,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1675099147845,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Journal Entries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AccountingDocument-displayFactSheet?AccountingDocument=9400000001&CompanyCode=1010&FiscalYear=2022&sap-app-origin-hint=&/detail/1010/2022/9400000001\\\",\\\"appId\\\":\\\"#AccountingDocument-displayFactSheet\\\",\\\"timestamp\\\":1669742926660,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669742926660,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Search Service Order Quotations\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ServiceQuotation-search?sap-ui-tech-hint=WCF&/sap-iapp-state=TASLYD446QZERO1D7WGWQLZK9OQMO7Z5IO2E9CLIW\\\",\\\"appId\\\":\\\"#ServiceQuotation-search\\\",\\\"timestamp\\\":1669717091616,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669717091616,"
		"\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Internal Order Factsheet\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InternalOrder-displayFactSheet?InternalOrder=000002000742&sap-app-origin-hint=&sap-ushell-navmode=inplace\\\",\\\"appId\\\":\\\"#InternalOrder-displayFactSheet\\\",\\\"timestamp\\\":1669717081566,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669717081566,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Search Service Order\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ServiceOrder-search?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#ServiceOrder-search\\\",\\\"timestamp\\\":1669716876268,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669716876268,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		"],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Release for Billing\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Service-releaseItemsForBilling?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#Service-releaseItemsForBilling\\\",\\\"timestamp\\\":1669715571345,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669715571345,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Service Order\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ServiceOrder-create?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#ServiceOrder-create\\\",\\\"timestamp\\\":1669713742370,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669713742370,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Activity Attributes\\\",\\\"appType\\\":\\\"Application\\\",\\"
		"\"url\\\":\\\"#BusProcSchedgActyAttribute-configure\\\",\\\"appId\\\":\\\"#BusProcSchedgActyAttribute-configure\\\",\\\"timestamp\\\":1669667899851,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669667899851,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Characteristic Combinations\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ObjValDetnCharcCombination-manage\\\",\\\"appId\\\":\\\"#ObjValDetnCharcCombination-manage\\\",\\\"timestamp\\\":1669667053895,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669667053895,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Supply Protection\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupAvailabilityProtectionPlan-manage\\\",\\\"appId\\\":\\\"#SupAvailabilityProtectionPlan-manage\\\",\\\"timestamp"
		"\\\":1669666423161,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669666423161,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Alternative Control\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AlternativeControl-configure\\\",\\\"appId\\\":\\\"#AlternativeControl-configure\\\",\\\"timestamp\\\":1669665468604,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669665468604,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Substitution Strategy\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SubstitutionStrategy-configure\\\",\\\"appId\\\":\\\"#SubstitutionStrategy-configure\\\",\\\"timestamp\\\":1669665062760,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669665062760,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Assign Product to Product Allocation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocationSequence-assignProductToProductAllocation\\\",\\\"appId\\\":\\\"#ProductAllocationSequence-assignProductToProductAllocation\\\",\\\"timestamp\\\":1669660421708,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669660421708,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Product Allocation Sequences\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocationSequence-manageProductAllocationSequences\\\",\\\"appId\\\":\\\"#ProductAllocationSequence-manageProductAllocationSequences\\\",\\\"timestamp\\\":1669660161934,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669660161934,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		"],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Product Allocation Planning Data\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocationObject-manageProductAllocationPlanningData\\\",\\\"appId\\\":\\\"#ProductAllocationObject-manageProductAllocationPlanningData\\\",\\\"timestamp\\\":1669659941545,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669659941545,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Product Allocation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProductAllocationObject-configureProductAllocation\\\",\\\"appId\\\":\\\"#ProductAllocationObject-configureProductAllocation\\\",\\\"timestamp\\\":1669659641314,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669659641314,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},"
		"{\\\"oItem\\\":{\\\"title\\\":\\\"Release for Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ATPRequirement-releaseForDelivery\\\",\\\"appId\\\":\\\"#ATPRequirement-releaseForDelivery\\\",\\\"timestamp\\\":1669658488822,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669658488822,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Order Fulfillment Responsibilities\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OrderFulfillmentResponsibility-configure\\\",\\\"appId\\\":\\\"#OrderFulfillmentResponsibility-configure\\\",\\\"timestamp\\\":1669658400798,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669658400798,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Configure Custom BOP Sorting\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":"
		"\\\"#ABOPCustomSort-configure\\\",\\\"appId\\\":\\\"#ABOPCustomSort-configure\\\",\\\"timestamp\\\":1669652823007,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669652823007,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#LegalTask-displayInbox?allItems=true\\\",\\\"appId\\\":\\\"#LegalTask-displayInbox\\\",\\\"timestamp\\\":1669634740487,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669634740487,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Documents with Customer-Expected Price\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocument-listCustomerExpectedPrices\\\",\\\"appId\\\":\\\"#SalesDocument-listCustomerExpectedPrices\\\",\\\"timestamp\\\":1669385188362,\\\"icon\\\":\\"
		"\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669385188362,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-scheduleOutput?%2Fh4screen=SDOutput&JobCatalogEntryName=SALES_DOCUMENTS_OUTPUT_RUN\\\",\\\"appId\\\":\\\"#SalesOrder-scheduleOutput\\\",\\\"timestamp\\\":1669384026550,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669384026550,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Send Outputs for Purchase Scheduling Agreement Releases\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseSchedulingAgreement-printScheduledItemMessages?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PurchaseSchedulingAgreement-printScheduledItemMessages\\\",\\\"timestamp\\\":1669383948580,\\\"icon\\\":\\\"sap-ic"
		"on://product\\\"},\\\"iTimestamp\\\":1669383948580,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Teams and Responsibilities\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#TeamAsResponsible-maintain?openMode=embedIntoDetails\\\",\\\"appId\\\":\\\"#TeamAsResponsible-maintain\\\",\\\"timestamp\\\":1669371773496,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669371773496,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Stock / Requirements List\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MRPMaterial-monitorSupplyAndDemand?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#MRPMaterial-monitorSupplyAndDemand\\\",\\\"timestamp\\\":1669361510622,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669361510622,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InteractionCenterInbox-launch?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#InteractionCenterInbox-launch\\\",\\\"timestamp\\\":1669276359123,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669276359123,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-displayInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-displayInWebGUI\\\",\\\"timestamp\\\":1669236477423,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669236477423,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Ord"
		"ers - Automatic Extraction\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderRequest-autoExtract\\\",\\\"appId\\\":\\\"#SalesOrderRequest-autoExtract\\\",\\\"timestamp\\\":1669207577682,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669207577682,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Service Order Quotation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ServiceQuotation-create?sap-ui-tech-hint=WCF\\\",\\\"appId\\\":\\\"#ServiceQuotation-create\\\",\\\"timestamp\\\":1669189435437,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669189435437,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Purchase Order - Advanced\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-change?sap-ui-tech-hint=GUI&uitype=advanc"
		"edNoPar\\\",\\\"appId\\\":\\\"#PurchaseOrder-change\\\",\\\"timestamp\\\":1669151916289,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669151916289,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Your Solution\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CloudSolution-manage\\\",\\\"appId\\\":\\\"#CloudSolution-manage\\\",\\\"timestamp\\\":1669135072203,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669135072203,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Preliminary Billing Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PrelimBillingDocument-manage\\\",\\\"appId\\\":\\\"#PrelimBillingDocument-manage\\\",\\\"timestamp\\\":1669102287017,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669102287017,\\\"aUsageAr"
		"ray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PrelimBillingDocument-manageApprovalWorkflow\\\",\\\"appId\\\":\\\"#PrelimBillingDocument-manageApprovalWorkflow\\\",\\\"timestamp\\\":1669037464851,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669037464851,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Customer Contacts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CollectionsCustomerContact-manage\\\",\\\"appId\\\":\\\"#CollectionsCustomerContact-manage\\\",\\\"timestamp\\\":1669034484217,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1669034484217,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"tit"
		"le\\\":\\\"Change Condition Contract\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesRebateAgreement-changeAdvanced?CndnContrActvtnStatus=&CndnContrActvtnStatusName=Active&CndnContrMainSystemStatus=ICC02&CndnContrMainSystemStatusText=Released&CndnContrSettlmtIsLockedName=Not%20Locked&CndnContrType=0S01&CndnContrTypeDesc=Sales%20Rebate&CndnContrValidFrom=2022-11-18&CndnContrValidTo=2022-12-31&ConditionContract=2000000012&ConditionContract.CndnContrType=0S01&ConditionContract.ConditionContract.CndnContrType=0S01&Customer=17100003&CustomerName=Domestic%20Customer%20US%203&DeleteLogically=false&ExternalDocumentReferenceID=&Lock=true&LockForSettlement=true&PrepareForArchiving=false&Release=false&ReleaseCompletely=false&ReleaseForSettlement=false&UICT_ActvtnStatusCriticality=3&sap-app-origin-hint=&sap-xapp-state=TAS79211N1N0Q5WQE5DYKHSRG8MLEEYV395CE5H0S\\\",\\\"appId\\\":\\\"#SalesRebateAgreement-changeAdvanced\\\",\\\"timestamp\\\":1668956394363,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimesta"
		"mp\\\":1668956394363,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Condition Contracts - Sales Rebates\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesRebateAgreement-manage?sap-app-origin-hint=&/?sap-iapp-state=TASSD1NC3DV0765GRRTA7Z378B9XVCNVE43JSB5YS\\\",\\\"appId\\\":\\\"#SalesRebateAgreement-manage\\\",\\\"timestamp\\\":1668955714095,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668955714095,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Purchasing Info Record\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchasingInfoRecord-change?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PurchasingInfoRecord-change\\\",\\\"timestamp\\\":1668868821391,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668868821391,\\\"aUsageArray\\\":[0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Maintain Business Partner\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BusinessPartner-maintain?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BusinessPartner-maintain\\\",\\\"timestamp\\\":1668855133625,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668855133625,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Condition Contract\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesRebateAgreement-displayFactSheet?CndnContrActvtnStatus=&CndnContrActvtnStatusName=Active&CndnContrMainSystemStatus=ICC02&CndnContrMainSystemStatusText=Released&CndnContrSettlmtIsLockedName=Not%20Locked&CndnContrType=0S03&CndnContrTypeDesc=Sales%20Rebate%20-%202Step&CndnContrValidFrom=2022-11-18&CndnContrValidTo=2022-12-31&ConditionContract=2000000011&Customer=1710000"
		"3&CustomerName=Domestic%20Customer%20US%203&DeleteLogically=false&ExternalDocumentReferenceID=&Lock=true&LockForSettlement=true&PrepareForArchiving=false&Release=false&ReleaseCompletely=false&ReleaseForSettlement=false&UICT_ActvtnStatusCriticality=3&sap-app-origin-hint=&sap-xapp-state=TASLK8RMM93YUM2PDF4PYIOP5410OBNKZ6R8XSY9Y\\\",\\\"appId\\\":\\\"#SalesRebateAgreement-displayFactSheet\\\",\\\"timestamp\\\":1668784535320,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668784535320,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Condition Contract\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesRebateAgreement-createAdvanced?CndnContrType=0S01&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesRebateAgreement-createAdvanced\\\",\\\"timestamp\\\":1668771951729,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668771951729,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Purchasing Info Records\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchasingInfoRecord-maintain\\\",\\\"appId\\\":\\\"#PurchasingInfoRecord-maintain\\\",\\\"timestamp\\\":1668672428459,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668672428459,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"VC Modeling Environment\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#VariantConfiguration-modelingVariantConfiguration?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#VariantConfiguration-modelingVariantConfiguration\\\",\\\"timestamp\\\":1668670405041,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668670405041,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":"
		"{\\\"title\\\":\\\"Display Output Condition Records - Sales\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOutputCondition-display?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesOutputCondition-display\\\",\\\"timestamp\\\":1668669919180,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668669919180,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Price Conditions - Purchasing\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PriceCondition-create?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PriceCondition-create\\\",\\\"timestamp\\\":1668669154837,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668669154837,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Purchasing Info Record by Supplier\\\",\\\"appType\\\":\\\"Application\\\",\\\"url"
		"\\\":\\\"#PurchasingInfoRecord-displayBySupplier?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PurchasingInfoRecord-displayBySupplier\\\",\\\"timestamp\\\":1668605207963,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668605207963,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ConditionContract-manageWorkflows?%2Fh4screen=WFConditionContract&ScenarioId=WS02000435%2CWS02000436\\\",\\\"appId\\\":\\\"#ConditionContract-manageWorkflows\\\",\\\"timestamp\\\":1668604336988,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668604336988,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Condition Contracts - Supplier Rebates\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierRebateAgreement-m"
		"anage\\\",\\\"appId\\\":\\\"#SupplierRebateAgreement-manage\\\",\\\"timestamp\\\":1668520088888,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668520088888,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Material Document List\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MaterialMovement-displayMaterialDocumentListInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#MaterialMovement-displayMaterialDocumentListInWebGUI\\\",\\\"timestamp\\\":1668515431409,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668515431409,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Dashboard - SAP Application Interface Framework\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-manage?sap-ui-tech-hint=WDA\\\",\\\"appId\\\":\\\"#AIFMessage-manage\\"
		"\",\\\"timestamp\\\":1668508864773,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668508864773,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Monitoring Overview\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-startMessageOverview?sap-app-origin-hint=&/2022-11-01T12%3A38%3A33Z&2022-11-15T12%3A38%3A33Z&7\\\",\\\"appId\\\":\\\"#AIFMessage-startMessageOverview\\\",\\\"timestamp\\\":1668508714801,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668508714801,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Monitoring\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-startMessageMonitoring\\\",\\\"appId\\\":\\\"#AIFMessage-startMessageMonitoring\\\",\\\"timestamp\\\":1668508714419,\\\"icon\\\":\\\"sap-icon://product\\\"},\\"
		"\"iTimestamp\\\":1668508714419,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Monitoring for Integration Experts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-startMessageMonitoringAdministrators\\\",\\\"appId\\\":\\\"#AIFMessage-startMessageMonitoringAdministrators\\\",\\\"timestamp\\\":1668508592246,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668508592246,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Message Monitoring for Integration Experts\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#AIFMessage-startMessageMonitoringIntegrationExperts\\\",\\\"appId\\\":\\\"#AIFMessage-startMessageMonitoringIntegrationExperts\\\",\\\"timestamp\\\":1668508360200,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668508360200,\\\"aUsageArray"
		"\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Quotations - Version 2\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-manageV2\\\",\\\"appId\\\":\\\"#SalesQuotation-manageV2\\\",\\\"timestamp\\\":1668506928394,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668506928394,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Customer Return\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-createCustomerReturn?P_DisplayCurrency=EUR&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASAT2MU6YFU3WVSU2ME5F23TTYATR24BX45DSECN\\\",\\\"appId\\\":\\\"#CustomerReturn-createCustomerReturn\\\",\\\"timestamp\\\":1668499918007,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668499918007,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Outbound Delivery - Proof of Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-changePODInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-changePODInWebGUI\\\",\\\"timestamp\\\":1668434892336,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668434892336,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Application Jobs\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DeliveryApplicationJob-scheduleGICreation?JobCatalogEntryName=SAP_LE_WS_MONITOR_OUTB_DEL_GDS&/v4_JobRunList?sap-iapp-state=TASWMLA0QHHZUWRROXSULVLP3F819NJM9C6VJSG7B\\\",\\\"appId\\\":\\\"#DeliveryApplicationJob-scheduleGICreation\\\",\\\"timestamp\\\":1668431164189,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668431164189,\\\"aUsageArr"
		"ay\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Item Proposals\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesItemProposal-createItemProposal?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#SalesItemProposal-createItemProposal\\\",\\\"timestamp\\\":1668412021498,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668412021498,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Sales Quotations - VA22\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-change?%40odata.etag=W%2F%22SADL-202211110714374924380C~20221111071437.4924380%22&BindingPeriodValidityEndDate=2023-11-11&BindingPeriodValidityStartDate=2022-11-10&ChangeValidity=false&HdrGeneralIncompletionStatus=C&OverallChmlCmplncStatus=&OverallSDProcessStatus=A&OverallSDProcessStatus_Text=Open&OverallSaf"
		"etyDataSheetStatus=&OverallTrdCmplncEmbargoSts=&OvrlItmGeneralIncompletionSts=C&PurchaseOrderByCustomer=11223344&SalesQuotation=20001968&SalesQuotationDate=2022-11-10&SalesQuotationManage.OverallSDProcessStatus=A&SalesQuotationManage._OverallSDProcessStatus.OverallSDProcessStatus=A&SlsQtanDueDateCriticality=3&SoldToParty=17100001&SoldToPartyName=Domestic%20US%20Customer%201&TotalCreditCheckStatus=&TotalNetAmount=87.75&TransactionCurrency=USD&Updatable=true&sap-app-origin-hint=&sap-xapp-state=TASV54K0XBV28X7HN4TZ2BUZNCFBUBJDUYO03JSDM\\\",\\\"appId\\\":\\\"#SalesQuotation-change\\\",\\\"timestamp\\\":1668151401397,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668151401397,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Determine Refund\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReturnsOrder-refund?sap-app-origin-hint=&/RefundDetermination/60000191\\\",\\\"appId\\\":\\\"#Retur"
		"nsOrder-refund\\\",\\\"timestamp\\\":1668085052117,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668085052117,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Enter Inspection Results - From Warehouse\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MaterialInspection-maintainCustomerMaterialInspectionInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#MaterialInspection-maintainCustomerMaterialInspectionInWebGUI\\\",\\\"timestamp\\\":1668084634380,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668084634380,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Returns Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReturnsDelivery-changeInWebGUI?ReturnsDelivery=84000079&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#ReturnsDelivery-changeInWebGU"
		"I\\\",\\\"timestamp\\\":1668083075690,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668083075690,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Transfer / Manage Stock\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-manageStock?sap_mmim_apptype=manage\\\",\\\"appId\\\":\\\"#Material-manageStock\\\",\\\"timestamp\\\":1668006287179,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1668006287179,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseContract-manageWorkflows?ScenarioId=WS00800304\\\",\\\"appId\\\":\\\"#PurchaseContract-manageWorkflows\\\",\\\"timestamp\\\":1667940019799,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667940019799,\\\"aUsageArray\\\":[0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierInvoice-manageWorkflows?ScenarioId=WS00800251%2CWS00800303\\\",\\\"appId\\\":\\\"#SupplierInvoice-manageWorkflows\\\",\\\"timestamp\\\":1667940002554,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667940002554,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Delivery Performance\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-analyze_deliv_perf?SalesOrder=5039&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesOrder-analyze_deliv_perf\\\",\\\"timestamp\\\":1667935581419,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667935581419,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{"
		"\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierList-manageWorkflows?ScenarioId=WS02000090\\\",\\\"appId\\\":\\\"#SupplierList-manageWorkflows\\\",\\\"timestamp\\\":1667925078090,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667925078090,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Customer List\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Customer-displayList\\\",\\\"appId\\\":\\\"#Customer-displayList\\\",\\\"timestamp\\\":1667913414470,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667913414470,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage User Defined Criteria for Supplier Evaluation\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierPerformance-manage\\"
		"\",\\\"appId\\\":\\\"#SupplierPerformance-manage\\\",\\\"timestamp\\\":1667909977959,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667909977959,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Inbox\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BankAccount-displayInbox?scenarioId=FCLM_BAM_APPR&showAdditionalAttributes=true\\\",\\\"appId\\\":\\\"#BankAccount-displayInbox\\\",\\\"timestamp\\\":1667859844772,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667859844772,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CustomerReturn-ssb_ReturnRates?EvaluationId=.E.1556178455324\\\",\\\"appId\\\":\\\"#CustomerReturn-ssb_ReturnRates\\\",\\\"timestamp\\\":1667826716736,\\\"icon\\\":"
		"\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667826716736,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Track Customer Returns\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#DocumentFlow-displayCustomerReturnsTreckingInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#DocumentFlow-displayCustomerReturnsTreckingInWebGUI\\\",\\\"timestamp\\\":1667826465525,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667826465525,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Analyze Delivery Performance - Shipped as Planned\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-analyseShippedAsPlanned\\\",\\\"appId\\\":\\\"#OutboundDelivery-analyseShippedAsPlanned\\\",\\\"timestamp\\\":1667826051693,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":16678"
		"26051693,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Quotations - Flexible Analysis\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-analyzeQuotation?sap-ui-tech-hint=WDA\\\",\\\"appId\\\":\\\"#SalesQuotation-analyzeQuotation\\\",\\\"timestamp\\\":1667824929500,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667824929500,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Material Coverage\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#MRPPlanningSegment-monitorSegment\\\",\\\"appId\\\":\\\"#MRPPlanningSegment-monitorSegment\\\",\\\"timestamp\\\":1667815476664,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667815476664,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desk"
		"top\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Track Sales Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesContract-listIncompleteDocuments&/?sap-iapp-state--history=TASOQAUSMGGQ2OQ1E6YXHG4NF1MAAIVWYLDIH47UU&sap-iapp-state=TAS8CSVBQULF5WYC797M4DEYF6QSNXT4XAUT9J3J0\\\",\\\"appId\\\":\\\"#SalesContract-listIncompleteDocuments\\\",\\\"timestamp\\\":1667565049466,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667565049466,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order Fulfillment Issues\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrderFulfillmentIssue-analyzeKPIDetails?IsPotentialFutureIssue=0&sap-app-origin-hint=&sap-xapp-state=TASIEY705KOTYJ79EHDQFOB93O4SFMONYBJLQYYZF\\\",\\\"appId\\\":\\\"#SalesOrderFulfillmentIssue-analyzeKPIDetails\\\",\\\"timestamp\\\":1667564836198,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":166756483"
		"6198,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Incomplete Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesQuotation-listIncompleteDocuments&/?sap-iapp-state--history=TASCX6OJDCJE8NZY6VQD3OU5LYOU9U8NCJUVB6HQY\\\",\\\"appId\\\":\\\"#SalesQuotation-listIncompleteDocuments\\\",\\\"timestamp\\\":1667563459476,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667563459476,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Incomplete Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesInquiry-listIncompleteDocuments\\\",\\\"appId\\\":\\\"#SalesInquiry-listIncompleteDocuments\\\",\\\"timestamp\\\":1667563214241,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667563214241,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Mass Change of Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocumentMassChangeRequest-massChangeSalesDocuments?JobCatalogEntryName=SAP_SD_MCC_SLSDOCBG_J\\\",\\\"appId\\\":\\\"#SalesDocumentMassChangeRequest-massChangeSalesDocuments\\\",\\\"timestamp\\\":1667563117114,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667563117114,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Mass Change of Sales Orders\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocumentMassChangeRequest-massChangeSalesOrder?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesDocumentMassChangeRequest-massChangeSalesOrder\\\",\\\"timestamp\\\":1667562882174,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667562882174,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Mass Changes of Sales Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesDocumentMassChangeRequest-monitorJobLogDetails?SlsDocMassChangeRequestUUID=guid'0ecf98cb-3dd7-1edc-92f4-ba9395a6a1ba'&sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesDocumentMassChangeRequest-monitorJobLogDetails\\\",\\\"timestamp\\\":1667562860018,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667562860018,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create BP relationship\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BusinessPartner-createRelationship?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BusinessPartner-createRelationship\\\",\\\"timestamp\\\":1667466521043,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667466521043,\\\"aUsageArray\\\":[0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create BP role definition\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BusinessPartner-createRoleDefinition?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#BusinessPartner-createRoleDefinition\\\",\\\"timestamp\\\":1667466489498,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667466489498,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Purchasing Info Record\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchasingInfoRecord-create?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PurchasingInfoRecord-create\\\",\\\"timestamp\\\":1667463822821,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667463822821,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\"
		"\":{\\\"title\\\":\\\"Manage Business Partner\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BusinessPartner-manage\\\",\\\"appId\\\":\\\"#BusinessPartner-manage\\\",\\\"timestamp\\\":1667313537793,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667313537793,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Material\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-display?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Material-display\\\",\\\"timestamp\\\":1667310409129,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667310409129,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Material\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-create?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#Material-create\\\",\\\"timestamp\\"
		"\":1667304883289,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667304883289,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Close Period for Product Master\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Material-closingPeriodJob?JobCatalogEntryName=SAP_CMD_MMPV\\\",\\\"appId\\\":\\\"#Material-closingPeriodJob\\\",\\\"timestamp\\\":1667292498125,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667292498125,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Split Outbound Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-splitInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-splitInWebGUI\\\",\\\"timestamp\\\":1667221713753,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667221713753,\\\"aUsageArray\\"
		"\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Purchase Order - Advanced\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-create?sap-ui-tech-hint=GUI&uitype=advanced\\\",\\\"appId\\\":\\\"#PurchaseOrder-create\\\",\\\"timestamp\\\":1667207415033,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667207415033,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Catalog Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ProcurementCatalog-manageItems\\\",\\\"appId\\\":\\\"#ProcurementCatalog-manageItems\\\",\\\"timestamp\\\":1667060500863,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667060500863,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\"
		"\"Purchase Requisition\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-create?mode=create&sap-ui-tech-hint=UI5&/Search\\\",\\\"appId\\\":\\\"#PurchaseRequisition-create\\\",\\\"timestamp\\\":1667058853584,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667058853584,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Default Settings for Users\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#UserDefaults-manage?mode=admin&/ContainerDisplay\\\",\\\"appId\\\":\\\"#UserDefaults-manage\\\",\\\"timestamp\\\":1667036310236,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667036310236,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Workflows\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisition-manageWorkflows?Scenario"
		"Id=WS00800157%2CWS00800173%2CWS02000458%2CWS02000471%2CWS02000434%2CWS02000438&type=lean\\\",\\\"appId\\\":\\\"#PurchaseRequisition-manageWorkflows\\\",\\\"timestamp\\\":1667035781932,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1667035781932,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Situation Types\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SituationDefinition-maintain?ui-type=objectbased&/?sap-iapp-state--history=TAS0WFM0WLJXS3RMQTHW09C9Z3HA51BOPM9GSM02Q&sap-iapp-state=TASPVYA83TGHM2DFMZCH1IKUPTKXXUS99LCTQPWBD\\\",\\\"appId\\\":\\\"#SituationDefinition-maintain\\\",\\\"timestamp\\\":1666942482003,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666942482003,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Situations\\\",\\\"appType\\\""
		":\\\"Application\\\",\\\"url\\\":\\\"#SituationInstance-monitor?CalendarYear=2022&SitnDefinitionID=Z_CONTRACT&sap-app-origin-hint=&sap-xapp-state=TASN4BHYTE0DM4Y5OJ3RJ9BLZDVRV6NOI32LMS51D\\\",\\\"appId\\\":\\\"#SituationInstance-monitor\\\",\\\"timestamp\\\":1666942474889,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666942474889,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Sales Inquiries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesInquiry-manage&/?sap-iapp-state=TASEBUCQS7HZLQ6ZNRP7MV2YCMN18K5YQD1ATIM59&sap-iapp-state--history=TASP8EB9JMGIWC8Q44VB21Q92LS7XKM4YR30AW9PV\\\",\\\"appId\\\":\\\"#SalesInquiry-manage\\\",\\\"timestamp\\\":1666941615114,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666941615114,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"t"
		"itle\\\":\\\"Display Sales Inquiries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesInquiry-display?%24.basicSearch=10000150%20&Customer=17100003&OverallSDProcessStatus=A&PurchaseOrderByCustomer=11223344&SalesInquiry=10000150&SalesInquiryDate=2022-10-27T00%3A00%3A00.000Z&TotalNetAmount=175.50&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TASJQ72J7JFVDWM2W6LYIGKBXVW4GZLBQWH0LAK93&sap.suite.ui.generic.template.customData=%5Bobject%20Object%5D&sap.suite.ui.generic.template.genericData=%5Bobject%20Object%5D\\\",\\\"appId\\\":\\\"#SalesInquiry-display\\\",\\\"timestamp\\\":1666939724614,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666939724614,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Create Sales Inquiries\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesInquiry-create?sap-app-origin-hint=\\\",\\\"appId\\\":\\\"#SalesInquiry-create\\\",\\\"tim"
		"estamp\\\":1666939360951,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666939360951,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Credit Memo Request\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#CreditMemoRequest-change?%24.basicSearch=60000184&BillingDocumentDate=2022-10-27T00%3A00%3A00.000Z&CreditMemoRequest=60000184&CreditMemoRequestDate=2022-10-27T00%3A00%3A00.000Z&Customer=17100001&HeaderBillingBlockReason=Y8&OverallOrdReltdBillgStatus=A&PurchaseOrderByCustomer=11223344&SoldToPartyName=Domestic%20US%20Customer%201&TotalNetAmount=17.55&TransactionCurrency=USD&sap-app-origin-hint=&sap-xapp-state=TAS1HNSC94YA3G1JN2WNHXN69WWMTB3KBI76DL9MT&sap.suite.ui.generic.template.customData=%5Bobject%20Object%5D&sap.suite.ui.generic.template.genericData=%5Bobject%20Object%5D\\\",\\\"appId\\\":\\\"#CreditMemoRequest-change\\\",\\\"timestamp\\\":1666937365056,\\\"icon\\\":\\\"sap"
		"-icon://product\\\"},\\\"iTimestamp\\\":1666937365056,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Outbound Deliveries for Picking\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-listForPickingInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-listForPickingInWebGUI\\\",\\\"timestamp\\\":1666867345073,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666867345073,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Outbound Deliveries for Goods Issue\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-listForGoodsIssue?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-listForGoodsIssue\\\",\\\"timestamp\\\":1666867139100,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666867139100,\\\"aUsageArray\\"
		"\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"My Sales Order Schedule Lines - Due for Delivery\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#OutboundDelivery-createForSOSchedInWebGUI?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#OutboundDelivery-createForSOSchedInWebGUI\\\",\\\"timestamp\\\":1666866769511,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666866769511,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Electronic Documents\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ElectronicDocument-documentComplianceCockpit\\\",\\\"appId\\\":\\\"#ElectronicDocument-documentComplianceCockpit\\\",\\\"timestamp\\\":1666789967409,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666789967409,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Close Periods\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PostingPeriod-close?sap-ui-tech-hint=GUI\\\",\\\"appId\\\":\\\"#PostingPeriod-close\\\",\\\"timestamp\\\":1666778669189,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1666778669189,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Purchase Order Value and Scheduling Agreement Value\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrder-analyzeKPIS4HANA?P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASUR2HPU0TK9EXS9DGR4FT5NU0GLMFCZ4ELHOQH1\\\",\\\"appId\\\":\\\"#PurchaseOrder-analyzeKPIS4HANA\\\",\\\"timestamp\\\":1647540110097,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1647540110097,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"
		"0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Display Activity\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierActivity-display?CompanyCode=DE01&CostCenter=&EmployeeFullName=Franz%20Musterman&P_DisplayCurrency=USD&PurchasingCategory=&PurgCatDescription=&PurgCatUUID=00000000-0000-0000-0000-000000000000&SuplrActyDescription=Activity_09.10PP&SuplrActyLifecycleStatus=01&SuplrActyLifecycleStatusName=Not%20Started&SuplrActyLifecycleStatusName_Text=Not%20Started&SuplrActyName=Activity_09.10PP&SuplrActyPriority=1&SuplrActyPriorityName=Low&SuplrActyPriorityName_Text=Low&SuplrActyType=SD&SuplrActyUUID=1246368b-d7aa-1ed9-bacc-58d336a7a364&Supplier=17300001&SupplierActivity=31&SupplierName=Domestic%20US%20Supplier%201&TotalTaskCount=0&UserID=S4H_MM&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS1EGFTNHBNM839L992WBXUOBTDLMNK0VZDJEBMT\\\",\\\"appId\\\":\\\"#SupplierActivity-display\\\",\\\"timestamp\\\":1647540082327,\\\"icon\\\":\\\"sa"
		"p-icon://product\\\"},\\\"iTimestamp\\\":1647540082327,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Change Activity\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierActivity-change?%24.basicSearch=&CriticalityCode=0&PurchaserRespFullName=Franz%20Musterman&PurchaserResponsible=S4H_MM&PurchasingCategory=&PurgCatDescription=&SuplrActyLifecycleStatus=01&SuplrActyPriority=1&SuplrActyType=SD&SuplrActyUUID=0ad0658a-6f04-1ed8-b4f4-76a332088d42&SupplierActivity=11&UserHasAssetChangeAuthzn=true&sap-app-origin-hint=&sap-xapp-state=TASMACHF5S1H69QQ8Y6ZE8L73D0Y3TAM5PQG7QZR3\\\",\\\"appId\\\":\\\"#SupplierActivity-change\\\",\\\"timestamp\\\":1646947677659,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646947677659,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Overview Invento"
		"ry Processing\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InventoryManagement-displayMonitoringOverviewPage\\\",\\\"appId\\\":\\\"#InventoryManagement-displayMonitoringOverviewPage\\\",\\\"timestamp\\\":1646947591823,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646947591823,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Activities\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SupplierActivity-manage?P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS7QTJAWOG67Y4BFG4AZF49ID969DKF1A84PG8AM\\\",\\\"appId\\\":\\\"#SupplierActivity-manage\\\",\\\"timestamp\\\":1646947234560,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646947234560,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Monitor Purchase Order It"
		"ems\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseOrderItem-monitorPurDocItems?P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TASAZ72WVY83LN86QHBYQZNMUNC3O7MHAYLJLZ24A\\\",\\\"appId\\\":\\\"#PurchaseOrderItem-monitorPurDocItems\\\",\\\"timestamp\\\":1646775066230,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646775066230,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PurchaseRequisitionItem-analyzeNoTouchRateSB?P_DateFunction=PREVIOUSYEARTODATE&P_DisplayCurrency=USD&sap-app-origin-hint=&sap-ushell-navmode=inplace&sap-xapp-state=TAS94LTIA4NZ7MQ0RGXCO9PE1H0MQW9L7U9FKIXB2\\\",\\\"appId\\\":\\\"#PurchaseRequisitionItem-analyzeNoTouchRateSB\\\",\\\"timestamp\\\":1646775054900,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646775054900,\\\""
		"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Overview Inventory Management\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#InventoryManagement-displayAnalyticsOverviewPage\\\",\\\"appId\\\":\\\"#InventoryManagement-displayAnalyticsOverviewPage\\\",\\\"timestamp\\\":1646774322121,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646774322121,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Sales Order Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#SalesOrder-ssb_Confirmed?EvaluationId=.E.1478695250218\\\",\\\"appId\\\":\\\"#SalesOrder-ssb_Confirmed\\\",\\\"timestamp\\\":1646773764024,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646773764024,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop"
		"\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"SAP Smart Business Runtime\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#BillingDocument-ssb_Check_Opn_Sls?EvaluationId=.E.1464880658803\\\",\\\"appId\\\":\\\"#BillingDocument-ssb_Check_Opn_Sls\\\",\\\"timestamp\\\":1646773695618,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646773695618,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Predictive Models\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#PredictiveScenario-ummOverview\\\",\\\"appId\\\":\\\"#PredictiveScenario-ummOverview\\\",\\\"timestamp\\\":1646768665130,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646768665130,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Journal Entry Analyzer\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#Ac"
		"countingDocument-analyzeGLLineItem?AccountingDocument=100000009&CompanyCode=1710&CompanyCode_Text=Company%20Code%201710&DocumentDate=2018-11-05T00%3A00%3A00.000Z&FiscalPeriod=010&FiscalYear=2019&IntercompanyTransaction=&PostingDate=2019-10-16T00%3A00%3A00.000Z&sap-app-origin-hint=&sap-xapp-state=TASRH6XPGK9IGIG351MPC49ZIDGIHG5J6BUMAL927\\\",\\\"appId\\\":\\\"#AccountingDocument-analyzeGLLineItem\\\",\\\"timestamp\\\":1646764673286,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646764673286,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Reset Cleared Items\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ClearingAccountingDocument-resetClearedItems\\\",\\\"appId\\\":\\\"#ClearingAccountingDocument-resetClearedItems\\\",\\\"timestamp\\\":1646764632551,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646764632551,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0"
		",0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Enterprise Search Models\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#EnterpriseSearchModel-manage\\\",\\\"appId\\\":\\\"#EnterpriseSearchModel-manage\\\",\\\"timestamp\\\":1646762198693,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646762198693,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Define Advanced Compliance Reports\\\",\\\"appType\\\":\\\"Application\\\",\\\"url\\\":\\\"#ReportingTask-define\\\",\\\"appId\\\":\\\"#ReportingTask-define\\\",\\\"timestamp\\\":1646762189089,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646762189089,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true},{\\\"oItem\\\":{\\\"title\\\":\\\"Manage Responsibility Contexts\\\",\\\"appType\\\":\\\"Application\\"
		"\",\\\"url\\\":\\\"#ResponsibilityContext-manage\\\",\\\"appId\\\":\\\"#ResponsibilityContext-manage\\\",\\\"timestamp\\\":1646762098347,\\\"icon\\\":\\\"sap-icon://product\\\"},\\\"iTimestamp\\\":1646762098347,\\\"aUsageArray\\\":[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],\\\"iCount\\\":0,\\\"desktop\\\":true}]}\",\"id\":\"RecentActivity\",\"category\":\"I\",\"containerId\":\"sap.ushell.services.UserRecents\",\"containerCategory\":\"U\"}]}" ;


# 8 "globals.h" 2

# 1 "AsyncCallbacks.c" 1
 
 
 
int Poll_0_RequestCB()
{
	 

	 
	 

	 
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_0_ResponseCB(
	const char *	aResponseHeadersStr,
	int				aResponseHeadersLen,
	const char *	aResponseBodyStr,
	int				aResponseBodyLen,
	int				aHttpStatusCode)
{
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_1_RequestCB()
{
	 

	 
	 

	 
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_1_ResponseCB(
	const char *	aResponseHeadersStr,
	int				aResponseHeadersLen,
	const char *	aResponseBodyStr,
	int				aResponseBodyLen,
	int				aHttpStatusCode)
{
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_2_RequestCB()
{
	 

	 
	 

	 
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_2_ResponseCB(
	const char *	aResponseHeadersStr,
	int				aResponseHeadersLen,
	const char *	aResponseBodyStr,
	int				aResponseBodyLen,
	int				aHttpStatusCode)
{
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

# 9 "globals.h" 2


 
 


# 1 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap web-s01 search order\\\\combined_S4HANA-SAP Web-S01 Search Order.c" 2


# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 3 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap web-s01 search order\\\\combined_S4HANA-SAP Web-S01 Search Order.c" 2


# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 5 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap web-s01 search order\\\\combined_S4HANA-SAP Web-S01 Search Order.c" 2

# 1 "Action.c" 1
Action()
{
	
 
# 32 "Action.c"

	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	web_reg_find("Text=Logon", 
		"LAST");

 





	web_reg_save_param_regexp(
		"ParamName=sap-login-XSRF",
		"RegExp=name=\"sap-login-XSRF\"\\ value=\"(.*?)&\\#x3d",
		"Ordinal=1",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/flp*",
		"LAST");

lr_start_transaction("S4HANA-SAP Web-S01-01 Starting URL");

	web_url("flp", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/public/bc/ui2/logon/themes/sap_belize/img/background.jpg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/bc/ui2/logon/themes/sap_belize/library.css", "ENDITEM", 
		"LAST");

lr_end_transaction("S4HANA-SAP Web-S01-01 Starting URL",2);

	lr_think_time(10);
	
	
	web_reg_find("Text=Loading", 
		"LAST");

lr_start_transaction("S4HANA-SAP Web-S01-02 Log On");

	web_submit_data("flp_2",
		"Action=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?_sap-hash=JTIzU2hlbGwtaG9tZQ",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN",
		"Snapshot=t2.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=sap-system-login-oninputprocessing", "Value=onLogin", "ENDITEM",
		"Name=sap-urlscheme", "Value=", "ENDITEM",
		"Name=sap-system-login", "Value=onLogin", "ENDITEM",
		"Name=sap-system-login-basic_auth", "Value=", "ENDITEM",
		"Name=sap-accessibility", "Value=", "ENDITEM",
		"Name=sap-login-XSRF", "Value={sap-login-XSRF}=", "ENDITEM",
		"Name=sap-system-login-cookie_disabled", "Value=", "ENDITEM",
		"Name=sap-hash", "Value=JTIzU2hlbGwtaG9tZQ", "ENDITEM",
		"Name=sap-user", "Value={sapUser}", "ENDITEM",
		"Name=sap-password", "Value={sapPassword}", "ENDITEM",
		"Name=sap-client", "Value=100", "ENDITEM",
		"Name=__sap-sl__dummy", "Value=1", "ENDITEM",
		"Name=sap-language", "Value=EN", "ENDITEM",
		"LAST");

	web_submit_form("flp_3", 
		"Snapshot=t3.inf", 
		"ITEMDATA", 
		"EXTRARES", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/thirdparty/sap-xhrlib-esm.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/abap.js", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-min-0.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-min-3.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-min-1.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-min-2.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/72-Regular.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/72-Bold.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/SAP-icons.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/72-SemiboldDuplex.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/themes/base/fonts/sap-launch-icons.ttf", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/themes/sap_horizon/library.css", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/fonts/72-Light.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/themes/sap_horizon/library.css", "ENDITEM", 
		"LAST");

	web_url("manifest.json", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/m/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("start_up", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/start_up?so=%2A&action=%2A&systemAliasesFormat=object&sap-language=EN&sap-client=100&shellType=FLP&depth=0&sap-cache-id=FC8EB3B16D1A8DF96743DF5FAA94F1C2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/m/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=../ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/renderer/resources/resources_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("manifest.json_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("en.json", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/core/cldr/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/services/MessageBroker.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/renderers/fiori2/RendererExtensions.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("sap-ui-version.json", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap-ui-version.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=sap/ushell/renderers/fiori2/History.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");
		
	web_reg_save_param_ex(
		"ParamName=x-csrf-token",
		"LB=",
		"RB=\r\n",
		"SEARCH_FILTERS",
		"Scope=HEADERS",
		"HeaderNames=x-csrf-token",
		"LAST");
		
	web_add_auto_header("X-CSRF-Token",
		"Fetch");

	web_url("PersContainers(category='U',id='sap.ushell.cdm3-1.personalization')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='U',id='sap.ushell.cdm3-1.personalization')?$expand=PersContainerItems", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/renderers/fiori2/LogonFrameProvider.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/product_homes1/~767B4722490507043661C998DEEB3D8A~5/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-ext-light-1.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/themes/base/img/SAPLogo.svg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-ext-light-3.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/dt/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/insights/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/unified/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/table/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");
	
	web_add_auto_header("X-CSRF-Token",
		"{x-csrf-token}");

	web_url("pageSet('SAP_BASIS_PG_UI_MYHOME')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/FDM_PAGE_RUNTIME_SRV/pageSet('SAP_BASIS_PG_UI_MYHOME')?$expand=sections/viz,vizReferences/chipBags/properties,tileTypes/vizOptions/displayFormats/supported", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-ext-light-0.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/insights/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell_abap/bootstrap/evo/core-ext-light-2.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/unified/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/table/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/integration/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/product_homes1/~767B4722490507043661C998DEEB3D8A~5/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/integration/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/library-preload-write.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/write/api/ControlPersonalizationWriteAPI.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/library-preload-apply.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/write/api/ChangesWriteAPI.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/apply/_internal/appVariant/DescriptorChangeTypes.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/descriptorRelated/api/DescriptorChangeFactory.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/write/_internal/appVariant/AppVariantInlineChangeFactory.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/descriptorRelated/internal/Utils.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/write/_internal/appVariant/AppVariantInlineChange.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/f/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/fl/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/insights/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/dt/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/layout/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/unified/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/table/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/product_homes1/~767B4722490507043661C998DEEB3D8A~5/css/placeHolder.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/product_homes1/~767B4722490507043661C998DEEB3D8A~5/css/style.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/integration/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("ux.eng.s4producthomes1", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/lrep/flex/data/~ovIgjtb1JYwUkHqq3KqYw+QbcqQ=~/ux.eng.s4producthomes1?sap-client=100&sap-language=EN", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/utils/AppType.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("manifest.json_3", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/f/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("manifest.json_4", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/MenuBar/manifest.json?sap-language=EN&sap-client=100", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/themes/base/img/launchpad_favicon.ico", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("PersContainers(category='P',id='ux.eng.s4producthomes1')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='P',id='ux.eng.s4producthomes1')?$expand=PersContainerItems&sap-cache-id=00DE468A469579526F8D09A4E96A7D53", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/MenuBar/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("cardManifest.json", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/services/_CommonDataModel/vizTypeDefaults/cardManifest.json?sap-language=EN&sap-client=100", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/tnt/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/tnt/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("PersContainers(category='P',id='sap.ushell.UserDefaultParameter')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='P',id='sap.ushell.UserDefaultParameter')?$expand=PersContainerItems&sap-cache-id=00DE468A469579526F8D09A4E96A7D53", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/tnt/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("manifest.json_5", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/NavigationBarMenu/manifest.json?sap-language=EN&sap-client=100", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=../PostLoadingHeaderEnhancement/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_custom_request("FDM_PAGE_RUNTIME_SRV", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/FDM_PAGE_RUNTIME_SRV", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("PersContainers(category='P',id='flp.settings.FlpSettings')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='P',id='flp.settings.FlpSettings')?$expand=PersContainerItems&sap-cache-id=00DE468A469579526F8D09A4E96A7D53", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("$batch", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/C_SITNMYSITUATION_CDS/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed;boundary=batch_id_1746768218717_01", 
		"Body=--batch_id_1746768218717_01\r\nContent-Type:application/http\r\nContent-Transfer-Encoding:binary\r\n\r\nGET C_SitnMySituation/$count HTTP/1.1 \r\nAccept:application/json\r\n\r\n\r\n--batch_id_1746768218717_01--", 
		"LAST");

	web_custom_request("$batch_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/IWPGW/TASKPROCESSING;mo;v=2/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed;boundary=batch_id_1746768218716_01", 
		"Body=--batch_id_1746768218716_01\r\nContent-Type:application/http\r\nContent-Transfer-Encoding:binary\r\n\r\nGET TaskCollection/$count?$filter=(Status%20eq%20'READY'%20or%20Status%20eq%20'RESERVED'%20or%20Status%20eq%20'IN_PROGRESS'%20or%20Status%20eq%20'EXECUTED') HTTP/1.1 \r\nAccept:application/json\r\n\r\n\r\n--batch_id_1746768218716_01\r\nContent-Type:application/http\r\nContent-Transfer-Encoding:binary\r\n\r\nGET TaskCollection?$format=json&$skip=0&$top=5&$orderby=CreatedOn%20desc&$filter="
		"(Status%20eq%20'READY'%20or%20Status%20eq%20'RESERVED'%20or%20Status%20eq%20'IN_PROGRESS'%20or%20Status%20eq%20'EXECUTED')&$select=SAP__Origin,InstanceID,TaskDefinitionID,TaskTitle,CreatedByName,CreatedBy,CompletionDeadLine,Priority,CreatedOn HTTP/1.1 \r\nAccept:application/json\r\n\r\n\r\n--batch_id_1746768218716_01--", 
		"EXTRARES", 
		"Url=/sap/opu/odata/sap/SD_F1873_SO_WL_SRV/C_SalesOrderWl_F1873/$count?sap-language=EN", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/opu/odata/SAP/SD_CUSTOMER_INVOICES_CREATE/C_BillingDueListItem_F0798/$count?sap-language=EN", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_custom_request("$batch_3", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/C_SITNMYSITUATION_CDS/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed;boundary=batch_id_1746768219311_01", 
		"Body=--batch_id_1746768219311_01\r\nContent-Type:application/http\r\nContent-Transfer-Encoding:binary\r\n\r\nGET C_SitnMySituation?$top=5&$orderby=CreationDateTime%20desc&$format=json&$expand=to_InstanceMessageParameter HTTP/1.1 \r\nAccept:application/json\r\n\r\n\r\n--batch_id_1746768219311_01--", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/UserActionsMenu/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/NavigationBarMenu/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/m/themes/base/illustrations/sapIllus-Spot-EmptyPlanningCalendar.svg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/UserImage/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/m/themes/base/illustrations/sapIllus-Patterns.svg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/Notifications/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/utils/Deferred.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications/$count", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("GetBadgeNumber()", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/GetBadgeNumber()", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("NotificationTypePersonalizationSet", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/NotificationTypePersonalizationSet", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("Channels(ChannelId='SAP_EMAIL')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Channels(ChannelId='SAP_EMAIL')", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("PersContainers(category='P',id='sap.ushell.services.Notifications')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='P',id='sap.ushell.services.Notifications')?$expand=PersContainerItems&sap-cache-id=00DE468A469579526F8D09A4E96A7D53", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("Notifications", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications?$expand=Actions,NavigationTargetParams&$orderby=CreatedAt%20desc&$filter=IsGroupHeader%20eq%20false&$skip=0&$top=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("Channels(ChannelId='SAP_SMP')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Channels(ChannelId='SAP_SMP')", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("$batch_4", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/FDM_PAGE_RUNTIME_SRV/$batch", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=multipart/mixed; boundary=batch_bd56-ff53-571c", 
		"Body=--batch_bd56-ff53-571c\r\nContent-Type: application/http\r\nContent-Transfer-Encoding: binary\r\n\r\nGET pageSet?$expand=sections%2Fviz%2CvizReferences%2FchipBags%2Fproperties%2CtileTypes%2FvizOptions%2FdisplayFormats%2Fsupported&$filter="
		"id%20eq%20%27SAP_LE_PG_INBOD%27%20or%20id%20eq%20%27SAP_PRC_PG_PURCHASING_OVR%27%20or%20id%20eq%20%27SAP_PRC_PG_REQ_PROCESSING%27%20or%20id%20eq%20%27SAP_PRC_PG_PO_PROCESSING%27%20or%20id%20eq%20%27SAP_PRC_PG_PUR_SUPPL_EVAL%27%20or%20id%20eq%20%27SAP_PRC_PG_RBTE_MNTN%27%20or%20id%20eq%20%27SAP_PRC_PG_STRAT_PURCHASING_OVR%27%20or%20id%20eq%20%27SAP_PRC_PG_PURCH_ANALYTICS%27 HTTP/1.1\r\nsap-cancel-on-close: true\r\nsap-language: EN\r\nsap-client: 100\r\nsap-contextid-accept: header\r\nAccept: "
		"application/json\r\nAccept-Language: EN\r\nDataServiceVersion: 2.0\r\nMaxDataServiceVersion: 2.0\r\nX-Requested-With: XMLHttpRequest\r\n\r\n\r\n\r\n--batch_bd56-ff53-571c--", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/Search/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/esh/search/ui/i18n.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/esh/search/ui/resources/resources_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/esh/search/ui/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/export/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/microchart/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/vk/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/components/shell/Settings/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/export/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/microchart/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("Channels(ChannelId='SAP_SMP')_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Channels(ChannelId='SAP_SMP')", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("Channels(ChannelId='SAP_EMAIL')_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Channels(ChannelId='SAP_EMAIL')", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/lrep/content/~20240305200716.1464500~/apps/nw.core.flp.appdiagnostics/app/sap/sui_flp_app_sup/manifest.appdescr?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/comp/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/opu/odata/sap/sui_flp_app_sup_srv/$metadata?sap-client=100&sap-value-list=none&sap-language=EN&sap-context-token=20230303165809", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("NotificationTypePersonalizationSet_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/NotificationTypePersonalizationSet", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/mdc/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("INSIGHTS_CARDS", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/ui2/insights_srv/srvd/ui2/insights_cards_read_srv/0001/INSIGHTS_CARDS?$filter=visibility%20eq%20true&$select=descriptorContent,visibility,rank&$orderby=rank&$skip=0&$top=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/vbm/library-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/mdc/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ushell/renderer/resources/resources.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/export/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/vbm/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/microchart/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/esh/search/ui/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/vk/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/comp/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/sui_flp_app_sup/~5E539174B86CBE2303C46A8EC199ECC9~5/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("PersContainers(category='U',id='ushellSearchPersoServiceContainer')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='U',id='ushellSearchPersoServiceContainer')?$expand=PersContainerItems", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/mdc/messagebundle.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/comp/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/ui/mdc/themes/sap_horizon/library.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/flpplugins/msplugin/Component.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("allCatalogs", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Pages('%2FUI2%2FFLPNoActionChip')/allCatalogs?$expand=Chips/ChipBags/ChipProperties&$orderby=title&$filter=type%20eq%20%27CATALOG_PAGE%27%20or%20type%20eq%20%27H%27%20or%20type%20eq%20%27SM_CATALOG%27%20or%20type%20eq%20%27REMOTE%27&sap-cache-id=0BA89C2247861EDEBDCDD0741FA49C0F", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("ServerInfos", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/ServerInfos?$expand=Services/Capabilities", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/ServiceContainer.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/BaseHelperService.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/TeamsHelperService.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/CollaborationHelper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/ContactHelper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/collaboration/GraphApiConfig.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/thirdparty/msal-browser.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("manifest.json_6", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/resources/~20231031151700~/sap/suite/ui/commons/manifest.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=collaboration/CollaborationCardHelper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=windowmessages/CollaborationMessageBroker.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/opu/odata/sap/ESH_SEARCH_SRV/$metadata", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_url("applauncher.chip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/~E71FBEB692ABFDFACE833CCBA52F911B~C/chips/applauncher.chip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("BlankTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/blank/BlankTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("applauncher_dynamic.chip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/ui2/ushell/~E71FBEB692ABFDFACE833CCBA52F911B~C/chips/applauncher_dynamic.chip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("NumericTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/numeric/NumericTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DualTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/dual/DualTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("DeviationTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/deviation/DeviationTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ContributionTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/contribution/ContributionTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("ComparisonTileChip.xml", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/comparison/ComparisonTileChip.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("DataSources", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/DataSources?$expand=Annotations,Attributes/UIAreas,Attributes/Annotations&$filter=Type%20eq%20%27View%27%20and%20IsInternal%20eq%20false", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/numeric/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/blank/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/dual/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/contribution/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/deviation/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/comparison/manifest.json?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/dual/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/blank/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_custom_request("PersonalizedSearchMainSwitches", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/PersonalizedSearchMainSwitches?$filter=Selected%20eq%20true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/numeric/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/deviation/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/Util.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/comparison/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/ssuite/smartbusiness/tiles/contribution/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/TileLoadManager.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/AnnotationHelper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/TileNavigation.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/RequestManager.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/AppStateManager.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/DualTileTimeStampControl.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/Wrapper.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtiless1/~E71FBEB692ABFDFACE833CCBA52F911B~C/css/style.css", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_custom_request("Users('%3Ccurrent%3E')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/Users('%3Ccurrent%3E')", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/bc/ui5_ui5/sap/ssbtileslibs1/~8AE5C33DA9332E27A216E8CDDEB3C49B~5/TimeStampControl.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_custom_request("PersonalizedSearchMainSwitches_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/PersonalizedSearchMainSwitches?$filter=Selected%20eq%20true", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"LAST");

	web_url("PersContainers(category='U',id='web_assistant')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='U',id='web_assistant')?$expand=PersContainerItems", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("Users('%3Ccurrent%3E')_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/sap/ESH_SEARCH_SRV/Users('%3Ccurrent%3E')", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("X-CSRF-Token",
		"{x-csrf-token}");

	web_custom_request("PersContainers", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"__metadata\":{\"id\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='web_assistant',category='U')\",\"uri\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='web_assistant',category='U')\",\"type\":\"INTEROP.PersContainer\"},\"id\":\"web_assistant\",\"category\":\"U\",\"validity\":0,\"clientExpirationTime\":\"\\/Date(253373472000000)\\/\",\"component\":\"\",\"appName\":\"\",\"PersContainerItems\":[{\"value\":\"\\\""
		"{\\\\\\\"SAP_webassistant_page\\\\\\\":\\\\\\\"{\\\\\\\\\\\\\\\"wn\\\\\\\\\\\\\\\":[],\\\\\\\\\\\\\\\"anl\\\\\\\\\\\\\\\":[\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2021.001##Shell-home#1509266309\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2021.001##Shell-home#1509266644\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2021.002##Shell-home#1550138868\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2022.000##Shell-home#1614694898\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\""
		"SAP_S4HANA_ON-PREMISE#2022.001##Shell-home#1695766253\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2022.002##Shell-home#1764253093\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2023.000##Shell-home#1853611670\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2023.001##Shell-home#2010706534\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2023.002##Shell-home#2216992478\\\\\\\\\\\\\\\",\\\\\\\\\\\\\\\"SAP_S4HANA_ON-PREMISE#2023.003##Shell-home#2322964687\\\\\\\\\\\\\\\"]}"
		"\\\\\\\",\\\\\\\"sap-cmp-test\\\\\\\":\\\\\\\"__6KZPNO023JBO700J4ANKDK3F\\\\\\\",\\\\\\\"SAP_webassistant_quicktour_S4\\\\\\\":1}\\\"\",\"id\":\"web_assistant\",\"category\":\"I\",\"containerId\":\"web_assistant\",\"containerCategory\":\"U\"}]}", 
		"EXTRARES", 
		"Url=/sap/bc/lrep/content/~20240305200357.5993160~/apps/fin.central.user.defaultparameter/app/sap/fin_acc_userpar/manifest.appdescr?sap-language=EN&sap-client=100", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/bc/ui5_ui5/sap/fin_acc_userpar/~B2728FF42CB2BC52081034022B378433~5/Component-preload.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/sap_horizon/svg/libs/SAPGUI-icons.svg", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

	web_custom_request("PersContainers_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"__metadata\":{\"id\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='sap.ushell.UserDefaultParameter',category='P')\",\"uri\":\"https://SAP-HANA.MFDEMOPORTAL.COM:44300/sap/opu/odata/UI2/INTEROP/PersContainers(id='sap.ushell.UserDefaultParameter',category='P')\",\"type\":\"INTEROP.PersContainer\"},\"id\":\"sap.ushell.UserDefaultParameter\",\"category\":\"P\",\"validity\":0,\"clientExpirationTime\":\"\\/Date(253373472000000)\\/\",\"component\":\"\",\""
		"appName\":\"\",\"PersContainerItems\":[{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AccountAssignmentCategory\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AccountingDocument\",\"category\":\"I\",\"containerId\":\""
		"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"AccountingDocumentType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AccrualObject\",\"category\":\"I\",\""
		"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AccrualSubobject\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"ActivityType\",\"category\":\"I"
		"\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AllocationActualPlanVariant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\""
		"AllocationCycleStartDate\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AllocationPostingType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal "
		"Time)\\\"}}\",\"id\":\"AllocationType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"AssetClass\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)"
		"\\\"}}\",\"id\":\"BillToParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"BudgetPeriod\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}"
		"\",\"id\":\"BusinessArea\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"BusinessProcess\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\""
		",\"id\":\"ChartOfAccounts\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"CommitmentItem\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"1710\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 "
		"(Pacific Daylight Time)\\\"}}\",\"id\":\"CompanyCode\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"A000\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ControllingArea\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022"
		" 09:55:50 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ControllingValuationType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"CostCenter\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023"
		" 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"CostCenterGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"CostCenterHierarchy\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon "
		"Mar 20 2023 18:13:20 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"CostElement\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Mar 20 2023 18:13:20 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"CostObject\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\"
		"\"Thu Mar 17 2022 13:05:52 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Country\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"CreditMemoRequestType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\"
		"\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"CreditSegment\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Customer\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\""
		"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"CustomerGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 09:55:50 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"CustomerReturnType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"USD\\\",\\\"_shellData\\\":"
		"{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"DisplayCurrency\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"DistributionChannel\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":"
		"{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Division\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Nov 20 2023 05:53:57 GMT+0200 (Eastern European Standard Time)\\\"}}\",\"id\":\"Document\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\""
		"storeDate\\\":\\\"Thu Mar 17 2022 13:09:41 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"DocumentCurrency\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"M\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:30:00 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ExchangeRateType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\""
		"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"FinancialAccrualTransacType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"FinancialManagementArea\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\""
		"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"FinancialStatementVariant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"FiscalPeriod\",\"category\":\"I\",\"containerId\":\""
		"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"2022\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"FiscalYear\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"0000000\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\""
		"FiscalYearPeriod\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"FixedAsset\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\""
		"FunctionalArea\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"Fund\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\""
		"FundedProgram\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"GLAccount\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\""
		"GLAccountGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"GLAccountHierarchy\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\""
		":\"GLAccountLineItemIsAccrual\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"GrantID\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 09:55:50 GMT-0700 (Pacific Daylight Time)\\\"}}\",\""
		"id\":\"Group\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"HouseBank\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\""
		"HouseBankAccount\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Oct 24 2022 09:28:58 GMT+0200 (Central European Summer Time)\\\"}}\",\"id\":\"InternalOrder\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Mar 20 2023 18:13:20 GMT+0100 (Central European Standard Time)\\\"}}"
		"\",\"id\":\"IsPeriodBasedBalanceReporting\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Nov 20 2023 05:53:57 GMT+0200 (Eastern European Standard Time)\\\"}}\",\"id\":\"Item\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:02 GMT+0100 (Central European "
		"Standard Time)\\\"}}\",\"id\":\"JournalEntry\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Ledger\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"2022\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 "
		"GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"LedgerFiscalYear\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Mar 20 2023 18:13:20 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"LedgerGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 01 2024 08:14"
		":17 GMT-0800 (Pacific Standard Time)\\\"}}\",\"id\":\"MainWorkCenter\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 01 2024 08:14:17 GMT-0800 (Pacific Standard Time)\\\"}}\",\"id\":\"MainWorkCenterPlant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 01 2024 08:14"
		":26 GMT-0800 (Pacific Standard Time)\\\"}}\",\"id\":\"MaintenancePlanningPlant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"MasterFixedAsset\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17"
		" 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Material\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"MaterialGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06"
		":45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"MaterialType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"OperatingConcern\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"OR\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\""
		"Mon Oct 24 2022 09:28:58 GMT+0200 (Central European Summer Time)\\\"}}\",\"id\":\"OrderType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 08:25:43 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Payer\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 "
		"2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"PayerParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"PlanningCategory\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11"
		":06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Plant\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"PostingDate\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 "
		"GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ProfitCenter\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Wed Oct 18 2023 18:07:51 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"ProfitCenterHierarchy\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07"
		":03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"Project\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"PurchasingGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45"
		" GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"PurchasingOrganization\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 09:55:50 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesContractType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09"
		":07:02 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"SalesDocument\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"SalesDocumentType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue "
		"Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesOffice\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 "
		"11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesOrder\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:30:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesOrderType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"1710\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\"
		"\"Tue Mar 15 2022 11:29:15 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SalesOrganization\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Segment\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Nov "
		"20 2023 05:53:57 GMT+0200 (Eastern European Standard Time)\\\"}}\",\"id\":\"ServiceContract\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Mon Oct 24 2022 09:28:58 GMT+0200 (Central European Summer Time)\\\"}}\",\"id\":\"ServiceOrderType\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\""
		":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ShipToParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Oct 13 2022 08:25:43 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ShippedToParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"value\\\":\\\"1710\\\",\\\"_shellData\\\":"
		"{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"ShippingPoint\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 01 2024 08:14:17 GMT-0800 (Pacific Standard Time)\\\"}}\",\"id\":\"SoldProduct\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\""
		"storeDate\\\":\\\"Wed Oct 18 2023 18:07:47 GMT+0000 (Coordinated Universal Time)\\\"}}\",\"id\":\"SoldProductGroup\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Tue Mar 15 2022 11:30:14 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SoldToParty\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\""
		"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"StorageLocation\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu Mar 17 2022 11:06:45 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"Supplier\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\""
		"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"TaxIsCalculatedAutomatically\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"WBSElement\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\""
		"{\\\"value\\\":\\\"1710\\\",\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Fri Mar 18 2022 09:07:03 GMT+0100 (Central European Standard Time)\\\"}}\",\"id\":\"Warehouse\",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu May 08 2025 22:23:51 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SoldProduct \",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\""
		"containerCategory\":\"P\"},{\"value\":\"{\\\"_shellData\\\":{\\\"storeDate\\\":\\\"Thu May 08 2025 22:23:51 GMT-0700 (Pacific Daylight Time)\\\"}}\",\"id\":\"SoldProductGroup \",\"category\":\"I\",\"containerId\":\"sap.ushell.UserDefaultParameter\",\"containerCategory\":\"P\"}]}", 
		"LAST");

 
# 837 "Action.c"
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications/$count", 
		"PollIntervalMs=59900", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		"LAST");

 
# 857 "Action.c"
	web_reg_async_attributes("ID=Poll_1", 
		"Pattern=Poll", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/GetBadgeNumber()", 
		"PollIntervalMs=60000", 
		"RequestCB=Poll_1_RequestCB", 
		"ResponseCB=Poll_1_ResponseCB", 
		"LAST");

	web_url("GetBadgeNumber()_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/GetBadgeNumber()", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=Notifications/$count", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM", 
		"LAST");

 
# 888 "Action.c"
	web_reg_async_attributes("ID=Poll_2", 
		"Pattern=Poll", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications?$expand=Actions,NavigationTargetParams&$orderby=CreatedAt%20desc&$filter=IsGroupHeader%20eq%20false&$skip=0&$top=10", 
		"PollIntervalMs=59900", 
		"RequestCB=Poll_2_RequestCB", 
		"ResponseCB=Poll_2_ResponseCB", 
		"LAST");

	web_url("Notifications_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications?$expand=Actions,NavigationTargetParams&$orderby=CreatedAt%20desc&$filter=IsGroupHeader%20eq%20false&$skip=0&$top=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("flp;sap-fesr-only", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp;sap-fesr-only", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=utf-8", 
		"Body=sap-fesr-only=1&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,4541D867614245178FCBE6610D793E61,12695,18006,9868,118,undetermined_startup_0,242,34954,win_10,SAP_UI5SAP-Perf-FESRec-optF6252,FLPCUSTOMHOME@F6252,,cr_136,96913,1498161,,,0,X,,,,,0,1,2,,20250509052332784,ux.eng.s4producthomes1", 
		"LAST");

lr_end_transaction("S4HANA-SAP Web-S01-02 Log On",2);

	lr_think_time(10);
	

 





	web_reg_save_param_ex(
		"ParamName=webguiform_url",
		"LB/IC=\"/sap(",
		"RB/IC=)/",
		"SEARCH_FILTERS",
		"Scope=Body",
		"RequestUrl=*/webgui;~sysid=S4H;~service=3200*",
		"LAST");
		
lr_start_transaction("S4HANA-SAP Web-S01-03 Enter Tcode in Apps (VA03)");

 
	web_reg_save_param_regexp(
		"ParamName=moin",
		"RegExp==\\ \"(.*?)\";//]]",
		"SEARCH_FILTERS",
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/webgui;~sysid=S4H;~service=3200*",
		"LAST");

	web_submit_data("webgui;~sysid=S4H;~service=3200", 
		"Action=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=sap-flp-params", "Value={\"sap-flp-url\":\"https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN#SalesDocument-display?sap-ui-tech-hint=GUI\",\"system-alias\":\"S4SD\"}", "ENDITEM", 
		"Name=~transaction", "Value=VA03", "ENDITEM", 
		"Name=sap-client", "Value=100", "ENDITEM", 
		"Name=sap-language", "Value=EN", "ENDITEM", 
		"Name=~nosplash", "Value=1", "ENDITEM", 
		"Name=sap-ie", "Value=edge", "ENDITEM", 
		"Name=sap-theme", "Value=sap_horizon", "ENDITEM", 
		"Name=sap-touch", "Value=0", "ENDITEM", 
		"Name=sap-target-navmode", "Value=inplace", "ENDITEM", 
		"Name=sap-keepclientsession", "Value=2", "ENDITEM", 
		"Name=sap-ushell-timeout", "Value=0", "ENDITEM", 
		"Name=sap-shell", "Value=FLP1.120.0", "ENDITEM", 
		"EXTRARES", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/texts/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/sap_horizon/fonts/SAP-icons.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", "ENDITEM", 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/baseTheme/fonts/72-SemiboldDuplex.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", "ENDITEM", 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/baseTheme/fonts/72-Regular.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", "ENDITEM", 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/baseTheme/fonts/72Mono-Regular.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", "ENDITEM", 
		"Url=/sap/public/icmandir/its/ls/theming/Base/baseLib/baseTheme/fonts/72-Bold.woff2", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/public/icmandir/its/ls/theming/UR/c2/sap_horizon/standards.css", "ENDITEM", 
		"LAST");
		
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Display Sales Orders - VA03",
		"LAST");

	web_url("PersContainers(category='U',id='sap.ushell.services.UserRecents')", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers(category='U',id='sap.ushell.services.UserRecents')?$expand=PersContainerItems", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/dbg/version.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/ToolbarOverflowDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/ToolbarOverflowMenuDecorator.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/lsgui/js/texts/messagebundle_en.properties", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"LAST");

	web_custom_request("ur",
		"URL=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/state/ur",
		"Method=POST",
		"Resource=0",
		"RecContentType=text/xml",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t59.inf",
		"Mode=HTML",
		"Body=moin={moin}&~RG_WEBGUI=X&sap-statistics=true&~path=/sap({webguiform_url})/bc/gui/sap/its/webgui&ClientWidth=1920&ClientHeight=987&ScreenOrientation=landscape&ThemedLayoutPaddingTop=16&ThemedLayoutPaddingBottom=16&ThemedLayoutPaddingLeft=48&ThemedLayoutPaddingRight=48&ThemedTableRowHeightStandard=33&ThemedScrollbarDimension=15&ThemedDocumentBackgroundColor=rgb(245, 246, 247)&ThemedSvgLibs=https%3A%2F%2Fsap-hana.mfdemoportal.com%3A44300%2Fsap%2Fpublic%2Ficmandir%2Fits%2Fls%2Ftheming%2FBase%2FbaseLib%2Fsap_horizon%2Fsvg%2Flibs%2FSAPGUI-icons.svg&ThemedRasterHeight=32&ThemedRasterWidth=10&ThemedAbapListRasterHeight=27&ThemedAbapListRasterWidth=8&sapthemecat=3&ThemeID=sap_horizon&SapThemeID=sap_horizon&DeviceType=DESKTOP&Platform=Windows&ThemedTableRowHeight=25&flpUrl=https%253a%252f%252fsap-hana.mfdemoportal.com%253a44300%252fsap%252fbc%252fui2%252fflp%253fsap-client%253d100%2526sap-language%253dEN%2523SalesDocument-display%253fsap-ui-tech-hint%253dGUI&sapurisfioritheme=1&theme=sap_horizon&sapbasetheme=sap_"
		"horizon&ThemedValueHelpWidth=1080&ThemedValueHelpHeight=700&~webguiScreenWidth=1920&~webguiScreenHeight=987&~webguiUserAreaWidth=1824&~webguiUserAreaHeight=883&~ci_result=ClientWidth=1920;ClientHeight=987;ScreenOrientation=landscape;ThemedLayoutPaddingTop=16;ThemedLayoutPaddingBottom=16;ThemedLayoutPaddingLeft=48;ThemedLayoutPaddingRight=48;ThemedTableRowHeightStandard=33;ThemedScrollbarDimension=15;ThemedDocumentBackgroundColor=rgb(245, 246, 247);ThemedSvgLibs=https%3A%2F%2Fsap-hana.mfdemoportal.com%3A44300%2Fsap%2Fpublic%2Ficmandir%2Fits%2Fls%2Ftheming%2FBase%2FbaseLib%2Fsap_horizon%2Fsvg%2Flibs%2FSAPGUI-icons.svg;ThemedRasterHeight=32;ThemedRasterWidth=10;ThemedAbapListRasterHeight=27;ThemedAbapListRasterWidth=8;sapthemecat=3;ThemeID=sap_horizon;SapThemeID=sap_horizon;DeviceType=DESKTOP;Platform=Windows;ThemedTableRowHeight=25;flpUrl=https%253a%252f%252fsap-hana.mfdemoportal.com%253a44300%252fsap%252fbc%252fui2%252fflp%253fsap-client%253d100%2526sap-language%253dEN%2523SalesDocument-display%253fsap-ui-te"
		"ch-hint%253dGUI;sapurisfioritheme=1;theme=sap_horizon;sapbasetheme=sap_horizon;ThemedValueHelpWidth=1080;ThemedValueHelpHeight=700;~webguiScreenWidth=1920;~webguiScreenHeight=987;~webguiUserAreaWidth=1824;~webguiUserAreaHeight=883",
		"LAST");

	web_custom_request("PersContainers_3", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		body_variable_1, 
		"EXTRARES", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/UI5WebComponent.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/PageLayoutPanel.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/ToolbarFieldNavigationDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/FeatureFlagsRenderer.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/InputFieldRenderer.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/UrBaseRenderer.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/common/lib/less.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/DragDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/ClientInterfaces.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"LAST");

	web_custom_request("PersContainers_4", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/INTEROP/PersContainers", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		body_variable_2, 
		"EXTRARES", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/DropDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/bc/personas3/core/script/sap/personas/fw/its/init.js?~cache-793051-375ae433", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/SplitterBase.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/bc/personas3/core/script/sap/personas/Client.js?1746768336739", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/bc/personas3/core/resources/version.js?1746768336912", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/bc/personas3/core/script/sap/personas/style/StyleHandler.js?20231116083056", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"Url=/sap/bc/personas3/core/resources/generated/themes/personas/slim.css?20231116083056", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM", 
		"LAST");

	web_custom_request("flp;sap-fesr-only_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp;sap-fesr-only", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=utf-8", 
		"Body=sap-fesr-only=1&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,F03E846088914419AAB11E6C6B35C4E4,0,0,7,0,searchFieldInShell-input_liveChange_1,0,0,win_10,SAP_UI5SAP-Perf-FESRec-optF6252,ell-input_liveChange,,cr_136,0,0,,,7,X,,,,,0,2,2,,20250509052525329,sap.ushell.renderer&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,,0,0,180,0,eldInShell-input-popup-table_itemPress_2,0,0,win_10,SAP_UI5SAP-Perf-FESRec-optVA03 (TR),APPSTART@CUSTOMHOME,,cr_136,0,0,,,180,X,,,,,0,2,2,,20250509052531739,"
		"sap.ushell.renderer", 
		"LAST");

	web_submit_data("webgui;~sysid=S4H;~service=3200_2", 
		"Action=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its;sap-fesr-only/webgui;~sysid=S4H;~service=3200", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=sap-fesr-only", "Value=1", "ENDITEM", 
		"Name=SAP-Perf-FESRec", "Value=6995CD6743CB44B48FA27D59F0D5F73E,66EF5F457A81EBCE8B23F52DD9000000,820,1383,4151,2,VA03_start_1st_0,826,1383,win_10,SAP_ITSSAP-Perf-FESRec-optVA03,VA03_start_1st,,cr_136,0,0,,,1948,X,,,,,,1,2,,20250509052531909,VA03", "ENDITEM", 
		"LAST");

lr_end_transaction("S4HANA-SAP Web-S01-03 Enter Tcode in Apps (VA03)",2);

	lr_think_time(10);
	
	
	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=status\":\"OK\"",
		"LAST");
	
	web_add_auto_header("moin",
		"{moin}");

lr_start_transaction("S4HANA-SAP Web-S01-04 Search Order");

	web_custom_request("json",
		"URL=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/batch/json?~RG_WEBGUI=X&sap-statistics=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=multipart/mixed",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t70.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body=[{\"post\":\"focus/wnd[0]/usr/ctxtVBAK-VBELN\",\"logic\":\"ignore\"},{\"post\":\"typeahead/send\",\"content\":\"%_SEARCH 40\",\"logic\":\"ignore\"},{\"get\":\"typeahead/get\",\"logic\":\"inverse\"},{\"get\":\"state/ur\"}]",
		"EXTRARES",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_JsonSuggest.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_JsonPopup.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_Popup.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_Items.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_ActiveInteractionDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_InteractionDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_HoverInteractionDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_TruncationDelegate.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_Suggest.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_JsonItems.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_JsonModel.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_ActionItems.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/Listbox_ActionItem.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"LAST");

	web_custom_request("json_2",
		"URL=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/batch/json?~RG_WEBGUI=X&sap-statistics=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=multipart/mixed",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t71.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body=[{\"post\":\"value/wnd[0]/usr/ctxtVBAK-VBELN\",\"content\":\"{orderNumber}\",\"logic\":\"ignore\"}]",
		"LAST");
 
 	web_reg_find("Fail=NotFound",
		"Search=Body",
		"Text=Display Standard Order {orderNumber}",
		"LAST");

	web_custom_request("json_3",
		"URL=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/batch/json?~RG_WEBGUI=X&sap-statistics=true",
		"Method=POST",
		"Resource=0",
		"RecContentType=multipart/mixed",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t72.inf",
		"Mode=HTML",
		"EncType=application/json;charset=UTF-8",
		"Body=[{\"content\":\"{orderNumber}\",\"post\":\"value/wnd[0]/usr/ctxtVBAK-VBELN\"},{\"post\":\"focus/wnd[0]/usr/ctxtVBAK-VBELN\",\"logic\":\"ignore\"},{\"post\":\"action/304/wnd[0]/usr/ctxtVBAK-VBELN\",\"content\":\"position=4\",\"logic\":\"ignore\"},{\"post\":\"action/3/wnd[0]/usr/btnBT_SUCH\"},{\"get\":\"state/ur\"}]",
		"EXTRARES",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/classes/TabstripDelegate_standards.js", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/public/icmandir/its/~cache-793051-375ae433/ls/js/img/1x1.gif", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI", "ENDITEM",
		"URL=/sap/opu/odata4/iwngw/notification/default/iwngw/notification_srv/0001/Notifications/$count", "Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", "ENDITEM",
		"LAST");

	web_submit_data("webgui;~sysid=S4H;~service=3200_3",
		"Action=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its;sap-fesr-only/webgui;~sysid=S4H;~service=3200",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t75.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=sap-fesr-only","Value=1","ENDITEM",
		"Name=SAP-Perf-FESRec","Value=6995CD6743CB44B48FA27D59F0D5F73E,66EF5F457A81EBCE8B23F52DD9000006,0,1218,1751,1,wnd[0]/usr/btnBT_SUCH_Press_1,174,1218,win_10,SAP_ITSSAP-Perf-FESRec-optVA03,usr/btnBT_SUCH_Press,,cr_136,745,56640,,,533,X,,,,,,2,2,,20250509052816404,VA03","ENDITEM",
		"LAST");


	web_stop_async("ID=Poll_1", 
		"LAST");

	web_stop_async("ID=Poll_2", 
		"LAST");

	web_stop_async("ID=Poll_0", 
		"LAST");

lr_end_transaction("S4HANA-SAP Web-S01-04 Search Order",2);

	lr_think_time(10);


lr_start_transaction("S4HANA-SAP Web-S01-05 Sign Out");

	web_url("allCatalogs_2", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/opu/odata/UI2/PAGE_BUILDER_PERS/Pages('unused')/allCatalogs?$filter=type%20eq%20%27H%27%20or%20type%20eq%20%27REMOTE%27", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		"LAST");

	web_reg_find("Text=SAP NetWeaver Application Server", 
		"LAST");

	web_submit_data("webgui",
		"Action=https://sap-hana.mfdemoportal.com:44300/sap({webguiform_url})/bc/gui/sap/its/webgui/?moin={moin}&sap-sessioncmd=CANCEL2",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/gui/sap/its/webgui;~sysid=S4H;~service=3200?sap-iframe-hint=GUI",
		"Snapshot=t83.inf",
		"Mode=HTML",
		"ITEMDATA",
		"Name=moin", "Value={moin}", "ENDITEM",
		"Name=sap-sessioncmd", "Value=CANCEL2", "ENDITEM",
		"LAST");

	web_reg_find("Text=Logon", 
		"LAST");

	web_url("logoff", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/public/bc/icf/logoff?sap-client=100", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		"LAST");

	web_custom_request("flp;sap-fesr-only_3", 
		"URL=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp;sap-fesr-only", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://sap-hana.mfdemoportal.com:44300/sap/bc/ui2/flp?sap-client=100&sap-language=EN", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=utf-8", 
		"Body=sap-fesr-only=1&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,E94D9B60DF0C4914A5A73B1B50404679,0,0,18,0,userActionsMenuHeaderButton_press_3,0,0,win_10,SAP_UI5SAP-Perf-FESRec-optVA03 (TR),nuHeaderButton_press,,cr_136,0,0,,,18,X,,,,,0,2,2,,20250509053226529,sap.ushell.renderer&SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,,0,0,2,0,__list2-6-logoutBtn_press_4,0,0,win_10,SAP_UI5SAP-Perf-FESRec-optVA03 (TR),t2-6-logoutBtn_press,,cr_136,0,0,,,2,X,,,,,0,2,2,,20250509053227814,undetermined&"
		"SAP-Perf-FESRec=B73B05A165F146F5A30AA6B71AC21D81,D712222577BC43CA94375070797AEBB0,5,220,539,1,__mbox-btn-0_press_5,114,220,win_10,SAP_UI5SAP-Perf-FESRec-optVA03 (TR),__mbox-btn-0_press,,cr_136,656,434,,,314,X,,,,,0,2,2,,20250509053231953,undetermined", 
		"LAST");

lr_end_transaction("S4HANA-SAP Web-S01-05 Sign Out",2);

	lr_think_time(10);

	return 0;
}
# 6 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap web-s01 search order\\\\combined_S4HANA-SAP Web-S01 Search Order.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 7 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap web-s01 search order\\\\combined_S4HANA-SAP Web-S01 Search Order.c" 2

