# 1 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap gui-s01 search order\\\\combined_S4HANA-SAP GUI-S01 Search Order.c"
# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





















































	
		typedef unsigned long long size_t;
		


	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














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
char *   lr_encrypt_ex (const char *plaintext);
char *   lr_decrypt_ex (const char *EncodedString);


 
 
 
 
 
 



 







 















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
# 515 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 518 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 542 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

 
 
 
 
 





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
# 576 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 599 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 623 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 702 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
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
# 763 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 778 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 802 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 814 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 822 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 828 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

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

 
# 933 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 940 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 962 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1038 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1067 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"


# 1079 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 







int   lr_cyberark_get_vault(char * first_param, ...);
int   lr_cyberark_get_vault_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 







int   lr_aws_get_secret(char * first_param, ...);
int   lr_aws_get_secret_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 







int   lr_azure_set_service_port(int portNum);
int   lr_azure_ad_client_get_token(char * first_param, ...);
int   lr_azure_ad_client_get_token_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_azure_kv_get_secret(char * first_param, ...);
int   lr_azure_kv_get_secret_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 







int   lr_hashicorp_vault_get_secret_with_token(char * first_param, ...);
int   lr_hashicorp_vault_get_secret_with_token_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_hashicorp_vault_get_secret_with_approle_auth(char * first_param, ...);
int   lr_hashicorp_vault_get_secret_with_approle_auth_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_hashicorp_vault_get_secret_with_jwt_auth(char * first_param, ...);
int   lr_hashicorp_vault_get_secret_with_jwt_auth_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_hashicorp_vault_get_secret_with_userpass_auth(char * first_param, ...);
int   lr_hashicorp_vault_get_secret_with_userpass_auth_no_ellipsis(const char* first_param, char** arguments, int argCount);
int   lr_hashicorp_vault_save_secret_from_json(char * first_param, ...);
int   lr_hashicorp_vault_save_secret_from_json_no_ellipsis(const char* first_param, char** arguments, int argCount);

 
 
 
 
 




typedef long long PVCI;




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







 
 

















# 1 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap gui-s01 search order\\\\combined_S4HANA-SAP GUI-S01 Search Order.c" 2

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/SharedParameter.h"








typedef long long PVCI2;




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

 
 
 

                               


 
 
 





















# 2 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap gui-s01 search order\\\\combined_S4HANA-SAP GUI-S01 Search Order.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/as_sapgui.h" 1
 














 































































		
 
	  int	sapgui_open_connection(const char *DescriptionName,
												   const char *connectionID,
												   ...);

	  int	sapgui_open_connection_ex(const char *ConnectStrName,
													  const char *DescriptionName,
													  const char *connectionID,
													  ...);

	  int	sapgui_logon(const char *userName,
									  const char *password,
									  const char *clientNum,
									  const char *language,
									  ...);

 
	  int sapgui_create_session();
	  int sapgui_create_new_session(const char *svoid, ...);
	
 
	  int sapgui_call_method(const char *controlID,
											const char *methodName,
											...);

	  int sapgui_call_method_ex(const char *controlID,
											const char *methodName,
											const char *outputParamName,
											...);

	  int sapgui_set_property(const char *controlID,
											 const char *propertyName,
											 const char *newValue,
											 ...);

	  int sapgui_get_property(const char *controlID,
											 const char *propertyName,
											 const char *outputParamName,
											 ...);

	  int sapgui_set_collection_property(const char *controlID,
														const char *propertyName,
														...);


 
	  int sapgui_active_object_from_parent_method(
		const char *controlID,
		const char *methodName,
		...
	);

	  int sapgui_active_object_from_parent_property(
		const char *controlID,
		const char *propertyName,
		...
	);

	  int sapgui_call_method_of_active_object(
		const char *methodName,
		...
	);

	  int sapgui_call_method_of_active_object_ex(
		const char *methodName,
		const char *outputParamName, 
		...
	);

	  int sapgui_set_property_of_active_object(
		const char *propertyName,
		const char *newValue,
		...
	);

	  int sapgui_get_property_of_active_object(
		const char *propertyName,
		const char *outputParamName,
		...
	);



 

	  int sapgui_select_active_connection(const char *connectionID, ...);

	  int sapgui_select_active_session(const char *sessionID, ...);
	
	  int sapgui_select_active_window (const char *windowID, ...);



 
	  int sapgui_status_bar_get_text(const char *outputParamName, ...);

	  int sapgui_status_bar_get_param( const char *paramIndex, const char *outputParamName, ...);

	  int sapgui_status_bar_get_type(const char *outputParamName, ...);
	
	  int sapgui_get_status_bar_text(const char *outputParamName, ...);

	  int sapgui_get_active_window_title(const char *outputParamName, ...);

	  int sapgui_is_object_available(const char *controlID, ...);

	  int sapgui_is_tab_selected(const char *description, const char *tabID, ...);

	  int sapgui_is_object_changeable(const char *controlID, ...);

 
	  int sapgui_set_ok_code(const char *text, ...);

	  int sapgui_send_vkey(const char *key, ...);

	  int sapgui_resize_window(const char *width, const char *heigh, ...);
	  int sapgui_window_resize(const char *width, const char *heigh, ...);
	  int sapgui_window_maximize(const char *svoid, ...);
	  int sapgui_window_close(const char *svoid, ...);
	  int sapgui_window_restore(const char *svoid, ...);
	
	  int sapgui_window_scroll_to_row(const char *position, ...);

	  int sapgui_press_button(const char *description, const char *buttonID, ...);
	  int sapgui_select_radio_button(const char *description, const char *buttonID, ...);
	  int sapgui_set_password(const char *description, const char *password, const char *controlID, ...);
	  int sapgui_set_text(const char *description, const char *text, const char *controlID, ...);
	  int sapgui_select_menu(const char *description, const char *menuID, ...);
	  int sapgui_select_tab(const char *description, const char *tabID, ...);
	  int sapgui_set_checkbox(const char *description, const char *isSelected, const char *checkBoxID, ...);
	  int sapgui_set_focus(const char *controlID, ...);
	  int sapgui_select_combobox_entry(const char *description, const char *comboboxID, const char *entryKey, ...);


	 
	  int sapgui_get_ok_code(const char *outParamName, ...);
	  int sapgui_is_radio_button_selected(const char *description, const char *buttonID, ...);
	  int sapgui_get_text(const char *description, const char *controlID, const char *outParamName, ...);
	  int sapgui_is_checkbox_selected(const char *description, const char *checkBoxID, ...);


 
	  int sapgui_table_set_focus(const char *description, const char *tableID, const char *row, const char *column, ...);
	  int sapgui_table_press_button(const char *description, const char *tableID, const char *row, const char *column, ...);
	  int sapgui_table_select_radio_button(const char *description, const char *tableID, const char *row, const char *column, ...);
	  int sapgui_table_set_password(const char *description, const char *tableID, const char *row, const char *column, const char *password, ...);
	  int sapgui_table_set_text(const char *description, const char *tableID, const char *row, const char *column, const char *text, ...);
	  int sapgui_table_set_checkbox(const char *description, const char *tableID, const char *row, const char *column, const char *newValue, ...);
	  int sapgui_table_select_combobox_entry(const char *description, const char *tableID, const char *row, const char *column, const char *key, ...);
	  int sapgui_table_set_row_selected(const char *tableID, const char *row, const char *isSelected, ...);
	  int sapgui_table_set_column_selected(const char *description, const char *tableID, const char *column, const char *isSelected, ...);
	  int sapgui_table_set_column_width(const char *description, const char *tableID, const char *column, const char *width, ...);
	  int sapgui_table_reorder(const char *description, const char *tableID, const char *order, ...);

	 
	  int sapgui_table_fill_data(const char *description, const char *tableID, const char *data, ...);

	 
	  int sapgui_table_get_text(const char *description, const char *tableID, const char *row, const char *column, const char *paramName, ...);
	  int sapgui_table_is_radio_button_selected(const char *description, const char *tableID, const char *row, const char *column, ...);
	  int sapgui_table_is_checkbox_selected(const char *description, const char *tableID, const char *row, const char *column, ...);
	  int sapgui_table_is_row_selected(const char *tableID, const char *row, ...);
	  int sapgui_table_is_column_selected(const char *tableID, const char *column, ...);
	  int sapgui_table_get_column_width(const char *description, const char *tableID, const char *column, const char *paramName, ...);

 

	 
	  int sapgui_grid_clear_selection(const char *description, const char *gridID, ...);
	  int sapgui_grid_select_all(const char *description, const char *gridID, ...);
	  int sapgui_grid_selection_changed(const char *description, const char *gridID, ...);
	  int sapgui_grid_press_column_header(const char *description, const char *gridID, const char *column, ...);
	  int sapgui_grid_select_cell(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_grid_select_rows(const char *description, const char *gridID, const char *rows, ...);
	  int sapgui_grid_select_column(const char *description, const char *gridID, const char* column, ...);
	  int sapgui_grid_deselect_column(const char *description, const char *gridID, const char* column, ...);
	  int sapgui_grid_select_columns(const char *description, const char *gridID, ...);
	  int sapgui_grid_select_cells(const char *description, const char *gridID, ...);
	  int sapgui_grid_select_cell_row(const char *description, const char *gridID, const char *row, ...);
	  int sapgui_grid_select_cell_column(const char *description, const char *gridID, const char *column, ...);
	  int sapgui_grid_set_column_order(const char *description, const char *gridID, ...);
	  int sapgui_grid_set_column_width(const char *description, const char *gridID, const char* column, const char* width, ...);
	  int sapgui_grid_scroll_to_row(const char *description, const char *gridID, const char *row, ...);

	 
	  int sapgui_grid_double_click(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_grid_click(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_grid_press_button(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_grid_press_total_row(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_grid_set_cell_data(const char *description, const char *gridID, const char *row, const char *column, const char *newValue, ...);
	  int sapgui_grid_set_checkbox(const char *description, const char *gridID, const char *row, const char *column, const char *newValue, ...);

	 
	  int sapgui_grid_double_click_current_cell(const char *description, const char *gridID, ...);
	  int sapgui_grid_click_current_cell(const char *description, const char *gridID, ...);
	  int sapgui_grid_press_button_current_cell(const char *description, const char *gridID, ...);
	  int sapgui_grid_press_total_row_current_cell(const char *description, const char *gridID, ...);

	 
	  int sapgui_grid_press_F1(const char *description, const char *gridID, ...);
	  int sapgui_grid_press_F4(const char *description, const char *gridID, ...);
	  int sapgui_grid_press_ENTER(const char *description, const char *gridID, ...);

	 
	  int sapgui_grid_press_toolbar_button(const char *description, const char *gridID, const char *buttonID, ...);
	  int sapgui_grid_press_toolbar_context_button(const char *description, const char *gridID, const char *buttonID, ...);

	 
	  int sapgui_grid_open_context_menu(const char *description, const char *gridID, ...);
	  int sapgui_grid_select_context_menu(const char *description, const char *gridID, const char *menuId, ...);
	  int sapgui_grid_select_toolbar_menu(const char *description, const char *gridID, const char *menuId, ...);

	 
	  int sapgui_grid_fill_data(const char *description, const char *gridID, const char *data, ...);

	 
	  int sapgui_grid_get_current_cell_row(const char *description, const char *gridID, const char *outParamName, ...);
	  int sapgui_grid_get_current_cell_column(const char *description, const char *gridID, const char *outParamName, ...);
	  int sapgui_grid_get_rows_count(const char *description, const char *gridID, const char *outParamName, ...);
	  int sapgui_grid_get_columns_count(const char *description, const char *gridID, const char *outParamName, ...);
	  int sapgui_grid_get_cell_data(const char *description, const char *gridID, const char *row, const char *column, const char *outParamName, ...);
	  int sapgui_grid_is_checkbox_selected(const char *description, const char *gridID, const char *row, const char *column, ...);


 

	 
	  int sapgui_tree_scroll_to_node(const char *description, const char *treeID, const char *topNode, ...);
	  int sapgui_tree_set_hierarchy_header_width(const char *description, const char *treeID, const char *width, ...);
	  int sapgui_tree_set_selected_node(const char *description, const char *treeID, const char *nodeKey, ...);

	 
	  int sapgui_tree_double_click_node(const char *description, const char *treeID, const char *nodeKey, ...);
	  int sapgui_tree_press_key(const char *description, const char *treeID, const char *key, ...);

	 
	  int sapgui_tree_press_button(const char *description, const char *treeID, const char *nodeKey, const char *itemName, ...);
	  int sapgui_tree_set_checkbox(const char *description, const char *treeID, const char *nodeKey, const char *itemName, const char *value, ...);
	  int sapgui_tree_double_click_item(const char *description, const char *treeID, const char *nodeKey, const char *itemName, ...);
	  int sapgui_tree_click_link(const char *description, const char *treeID, const char *nodeKey, const char *itemName, ...);

	 
	  int sapgui_tree_open_default_context_menu(const char *description, const char *treeID, ...);
	  int sapgui_tree_open_node_context_menu(const char *description, const char *treeID, const char *nodeKey, ...);
	  int sapgui_tree_open_header_context_menu(const char *description, const char *treeID, const char *headerName, ...);
	  int sapgui_tree_open_item_context_menu(const char *description, const char *treeID, const char *nodeKey, const char *itemName, ...);
	  int sapgui_tree_select_context_menu(const char *description, const char *treeID, const char *value, ...);

	 
	  int sapgui_tree_select_item(const char *description, const char *treeID, const char *nodeKey, const char *itemName, ...);
	  int sapgui_tree_select_node(const char *description, const char *treeID, const char *nodeKey, ...);
	  int sapgui_tree_unselect_node(const char *description, const char *treeID, const char *nodeKey, ...);
	  int sapgui_tree_unselect_all(const char *description, const char *treeID, ...);
	  int sapgui_tree_select_column(const char *description, const char *treeID, const char *columnName, ...);
	  int sapgui_tree_unselect_column(const char *description, const char *treeID, const char *columnName, ...);
	  int sapgui_tree_set_column_order(const char *description, const char *treeID, ...);

	 
	  int sapgui_tree_collapse_node(const char *description, const char *treeID, const char *nodeKey, ...);
	  int sapgui_tree_expand_node(const char *description, const char *treeID, const char *nodeKey, ...);
	  int sapgui_tree_scroll_to_item(const char *description, const char *treeID, const char *nodeKey, const char *itemName, ...);

	 
	  int sapgui_tree_set_column_width(const char *description, const char *treeID, const char *columnName, const char *width, ...);
	  int sapgui_tree_press_header(const char *description, const char *treeID, const char *headerName, ...);

	 
	  int sapgui_tree_is_checkbox_selected(const char *description, const char *treeID, const char *nodeKey, const char *itemName, ...);
	  int sapgui_tree_get_node_text(const char *description, const char *treeID, const char *nodeKey, const char *outParamName, ...);
	  int sapgui_tree_get_item_text(const char *description, const char *treeID, const char *nodeKey, const char *itemName, const char *outParamName, ...);


 
	  int sapgui_calendar_scroll_to_date(const char *description, const char *calendarID, const char *date, ...);
	  int sapgui_calendar_focus_date(const char *description, const char *calendarID, const char *date, ...);
	  int sapgui_calendar_select_interval(const char *description, const char *calendarID, const char *interval, ...);


 

	 
	  int sapgui_apogrid_select_all(const char *description, const char *gridID, ...);
	  int sapgui_apogrid_clear_selection(const char *description, const char *gridID, ...);
	  int sapgui_apogrid_select_cell(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_apogrid_deselect_cell(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_apogrid_select_row(const char *description, const char *gridID, const char *row, ...);
	  int sapgui_apogrid_deselect_row(const char *description, const char *gridID, const char *row, ...);
	  int sapgui_apogrid_select_column(const char *description, const char *gridID, const char *column,...);
	  int sapgui_apogrid_deselect_column(const char *description, const char *gridID, const char *column,...);
	  int sapgui_apogrid_scroll_to_row(const char *description, const char *gridID, const char *row, ...);
	  int sapgui_apogrid_scroll_to_column(const char *description, const char *gridID, const char *column, ...);

	 
	  int sapgui_apogrid_double_click(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_apogrid_set_cell_data(const char *description, const char *gridID, const char *row, const char *column, const char *newValue, ...);
        
	 
	  int sapgui_apogrid_get_cell_data(const char *description, const char *gridID, const char *row, const char *column, const char *outParamName, ...);
      int sapgui_apogrid_is_cell_changeable(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_apogrid_get_cell_format(const char *description, const char *gridID, const char *row, const char *column, const char *outParamName, ...);
	  int sapgui_apogrid_get_cell_tooltip(const char *description, const char *gridID, const char *row, const char *column, const char *outParamName, ...);

	 
	  int sapgui_apogrid_press_ENTER(const char *description, const char *gridID, ...);

	 
	  int sapgui_apogrid_open_cell_context_menu(const char *description, const char *gridID, const char *row, const char *column, ...);
	  int sapgui_apogrid_select_context_menu_item(const char *description, const char *gridID, const char *value, ...);

 
	  int sapgui_text_edit_scroll_to_line(const char *description, const char *textEditID, const char *LineNumber, ...);
	  int sapgui_text_edit_set_selection_indexes(const char *description, const char *textEditID, const char *startLineNumber, const char *endLineNumber, ...);
	  int sapgui_text_edit_set_unprotected_text_part(const char *description, const char *textEditID, const char *part, const char *text, ...);
	  int sapgui_text_edit_get_first_visible_line(const char *description, const char *textEditID, const char *outParamName, ...);
	  int sapgui_text_edit_get_selection_index_start(const char *description, const char *textEditID, const char *outParamName, ...);
	  int sapgui_text_edit_get_selection_index_end(const char *description, const char *textEditID, const char *outParamName, ...);
	  int sapgui_text_edit_get_number_of_unprotected_text_parts(const char *description, const char *textEditID, const char *outParamName, ...);
	  int sapgui_text_edit_double_click(const char *description, const char *textEditID, ...);
	  int sapgui_text_edit_single_file_dropped(const char *description, const char *textEditID, const char * strFileName, ...);
	  int sapgui_text_edit_multiple_files_dropped(const char *description, const char *textEditID, ...);
	  int sapgui_text_edit_press_F1(const char *description, const char *textEditID, ...);
	  int sapgui_text_edit_press_F4(const char *description, const char *textEditID, ...);
	  int sapgui_text_edit_open_context_menu(const char *description, const char *textEditID, ...);
	  int sapgui_text_edit_select_context_menu(const char *description, const char *textEditID, const char *menuId, ...);
	  int sapgui_text_edit_modified_status_changed(const char *description, const char *textEditID, const char *value, ...);

 
	  int sapgui_htmlviewer_send_event(const char *htmlViewerID, const char *frame, const char *data, const char *url, ...);
	  int sapgui_htmlviewer_dom_get_property(const char *htmlViewerID, const char *DOMPath, const char *paramName, ...);

	  int sapgui_toolbar_press_button(const char *description, const char *toolbarID, const char *buttonID, ...);
	  int sapgui_toolbar_press_context_button(const char *description, const char *toolbarID, const char *buttonID, ...);
	  int sapgui_toolbar_select_menu_item(const char *description, const char *toolbarID, const char *menuID, ...);
	  int sapgui_toolbar_select_menu_item_by_text(const char *description, const char *toolbarID, const char *menuItem, ...);
	  int sapgui_toolbar_select_context_menu_item(const char *description, const char *toolbarID, const char *menuID, ...);
	  int sapgui_toolbar_select_context_menu_item_by_text(const char *description, const char *toolbarID, const char *menuItem, ...);
















# 7 "globals.h" 2

# 1 "lr_strings.h" 1



const char* ctxtVBAK1=
		"usr/ctxtVBAK-VBELN";

const char* btnBT_SUCH1=
		"usr/btnBT_SUCH";

const char* btn1=
		"tbar[0]/btn[15]";

const char* btnSPOP1=
		"usr/btnSPOP-OPTION1";

const char* connection_string1=
		"   /SAP_CODEPAGE=1100   /"
		"FULLMENU SNC_PARTNERNAME=\"\" SNC_QOP=-1 /H/sap-hana.mfdemoportal.com/"
		"S/3200 /UPDOWNLOAD_CP=2";




# 8 "globals.h" 2


 
 


# 3 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap gui-s01 search order\\\\combined_S4HANA-SAP GUI-S01 Search Order.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap gui-s01 search order\\\\combined_S4HANA-SAP GUI-S01 Search Order.c" 2

# 1 "Action.c" 1
Action()
{

 
# 31 "Action.c"
 
 
lr_think_time(10);

lr_start_transaction("S4HANA-SAP GUI-S01-01 Log In");

	sapgui_open_connection_ex(connection_string1, 
		"S4H (S/4 Hana 2023)", 
		"con[0]");

	sapgui_select_active_connection("con[0]");

	sapgui_select_active_session("ses[0]");

	sapgui_select_active_window("wnd[0]");

	sapgui_window_resize("108", 
		"15", 
		"OPT_START", 
			"AdditionalInfo=sapgui104", 
		"OPT_END");

	 

	sapgui_logon("{SAP_Username}", 
		"{SAP_Password}", 
		"100", 
		"EN", 
		"OPT_START", 
			"AdditionalInfo=sapgui1012", 
		"OPT_END");
	
lr_end_transaction("S4HANA-SAP GUI-S01-01 Log In",2);

	lr_think_time(10);
	

lr_start_transaction("S4HANA-SAP GUI-S01-02 Enter Tcode");

	sapgui_set_ok_code("/nva03", 
		"OPT_START", 
			"AdditionalInfo=sapgui1013", 
		"OPT_END");

	sapgui_send_vkey("0", 
		"OPT_START", 
			"AdditionalInfo=sapgui1014", 
		"OPT_END");

lr_end_transaction("S4HANA-SAP GUI-S01-02 Enter Tcode",2);

	lr_think_time(10);
	
	
lr_start_transaction("S4HANA-SAP GUI-S01-03 Search Order");

	sapgui_set_text("VBAK-VBELN", 
		"{orderNumber}", 
		ctxtVBAK1, 
		"OPT_START", 
			"AdditionalInfo=sapgui1017", 
		"OPT_END");

	sapgui_press_button(" Search", 
		btnBT_SUCH1, 
		"OPT_START", 
			"AdditionalInfo=sapgui1019", 
		"OPT_END");
		
	sapgui_status_bar_get_text("paramStatusBarText", 
		"OPT_START", 
			"Recorded status bar text: Consider the subsequent documents", 
			"AdditionalInfo=sapgui1022", 
		"OPT_END");
		
lr_end_transaction("S4HANA-SAP GUI-S01-03 Search Order",2);

	lr_think_time(10);
	

lr_start_transaction("S4HANA-SAP GUI-S01-04 Log Off");

	sapgui_press_button("Exit", 
		btn1, 
		"OPT_START", 
			"AdditionalInfo=sapgui1023", 
		"OPT_END");

	sapgui_press_button("Exit", 
		btn1, 
		"OPT_START", 
			"AdditionalInfo=sapgui1026", 
		"OPT_END");

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Yes", 
		btnSPOP1, 
		"OPT_START", 
			"AdditionalInfo=sapgui1029", 
		"OPT_END");

lr_end_transaction("S4HANA-SAP GUI-S01-04 Log Off",2);

	return 0;
}
# 5 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap gui-s01 search order\\\\combined_S4HANA-SAP GUI-S01 Search Order.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "z:\\transfer vms\\vugen\\scripts\\sap\\s4hana-sap gui-s01 search order\\\\combined_S4HANA-SAP GUI-S01 Search Order.c" 2

