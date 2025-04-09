# 1 "z:\\transfer vms\\vugen\\scripts\\rdp\\sitescope-rdp-s01 access sitescope\\\\combined_SiteScope-RDP-S01 Access SiteScope.c"
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

# 1 "C:\\Program Files (x86)\\OpenText\\LoadRunner\\include/lrrdp.h" 1
 









  int rdp_connect_server(char * pFirstArg, ...);
  int rdp_disconnect_server(char * pFirstArg, ...);
  int rdp_mouse_click(char * pFirstArg, ...);
  int rdp_mouse_wheel(char * pFirstArg, ...);
  int rdp_mouse_double_click(char * pFirstArg, ...);
  int rdp_mouse_button_down(char * pFirstArg, ...);
  int rdp_mouse_button_up(char * pFirstArg, ...);
  int rdp_mouse_move(char * pFirstArg, ...);
  int rdp_key(char * pFirstArg, ...);
  int rdp_type(char * pFirstArg, ...);
  int rdp_sync_on_image(char * pFirstArg, ...);
  int rdp_save_image(char * pFirstArg, ...);
  int rdp_get_option(char * pFirstArg, ...);
  int rdp_raw_key_down(char * pFirstArg, ...);
  int rdp_raw_key_up(char * pFirstArg, ...);
  int rdp_set_lock(char * pFirstArg, ...);
  int rdp_release_lock(char * pFirstArg, ...);
  int rdp_mouse_drag(char * pFirstArg, ...);
  int rdp_sync_on_server_disconnect(char * pFirstArg, ...);
  int rdp_notify_new_clipboard_data(char * pFirstArg, ...);
  int rdp_send_clipboard_data(char * pFirstArg, ...);
  int rdp_receive_clipboard_data(char * pFirstArg, ...);
  int rdp_sync_on_window(char * pFirstArg, ...);
  int rdp_sync_on_agent(char * pFirstArg, ...);
  int rdp_get_window_position(char * pFirstArg, ...);
  int rdp_get_active_window_title(char * pFirstArg, ...);
  int rdp_get_object_info(char * pFirstArg, ...);
  int rdp_sync_on_object_info(char * pFirstArg, ...);
  int rdp_sync_object_mouse_click(char * pFirstArg, ...);
  int rdp_sync_object_mouse_double_click(char * pFirstArg, ...);
  int rdp_get_text(char * pFirstArg, ...);
  int rdp_sync_on_text(char * pFirstArg, ...);

 







# 7 "globals.h" 2







 
 






# 1 "z:\\transfer vms\\vugen\\scripts\\rdp\\sitescope-rdp-s01 access sitescope\\\\combined_SiteScope-RDP-S01 Access SiteScope.c" 2


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

 
 
 

                               


 
 
 





















# 3 "z:\\transfer vms\\vugen\\scripts\\rdp\\sitescope-rdp-s01 access sitescope\\\\combined_SiteScope-RDP-S01 Access SiteScope.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "z:\\transfer vms\\vugen\\scripts\\rdp\\sitescope-rdp-s01 access sitescope\\\\combined_SiteScope-RDP-S01 Access SiteScope.c" 2

# 1 "Action.c" 1
Action()
{

 
# 35 "Action.c"

lr_start_transaction("SiteScope-RDP-S01-01 Connect");

	rdp_connect_server("Host={Host}", 
		"UserName=demo", 
		"EncryptedPassword=62523a26e", 
		"Domain=NIMBUSCLIENT", 
		"LAST");


lr_end_transaction("SiteScope-RDP-S01-01 Connect",2);

	lr_think_time(10);


lr_start_transaction("SiteScope-RDP-S01-02 Log In");

	 


	rdp_key("StepDescription=Key Press 1", 
		"Snapshot=snapshot_177.inf", 
		"KeyValue=VK_TAB", 
		"LAST");

	rdp_type("StepDescription=Typed Text 1", 
		"Snapshot=snapshot_178.inf", 
		"TypedKeys=Password1", 
		"LAST");

	rdp_key("StepDescription=Key Press 2", 
		"Snapshot=snapshot_179.inf", 
		"KeyValue=VK_RETURN", 
		"LAST");

lr_end_transaction("SiteScope-RDP-S01-02 Log In",2);

	lr_think_time(10);

	
lr_start_transaction("SiteScope-RDP-S01-03 Click ADM Folder");

	rdp_sync_on_image("StepDescription=Image Synchronization 1", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		"IMAGEDATA", 
		"ImageLeft=18", "ImageTop=175", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_181.png", "ENDIMAGE", 
		"LAST");

	rdp_mouse_double_click("StepDescription=Mouse Double Click 1", 
		"Snapshot=snapshot_180.inf", 
		"MouseX=38", 
		"MouseY=195", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		"LAST");

lr_end_transaction("SiteScope-RDP-S01-03 Click ADM Folder",2);

	lr_think_time(10);
	

lr_start_transaction("SiteScope-RDP-S01-04 Start SiteScope Launcher");

	rdp_sync_on_image("StepDescription=Image Synchronization 2",
		"WaitFor=Appear",
		"AddOffsetToInput=Default",
		"Tolerance=High",
		"IMAGEDATA",
		"ImageLeft=497",
		"ImageTop=347",
		"ImageWidth=40",
		"ImageHeight=40",
		"ImageName=snapshot_185.png",
		"ENDIMAGE",
		"LAST");

	rdp_mouse_double_click("StepDescription=Mouse Double Click 2", 
		"Snapshot=snapshot_184.inf", 
		"MouseX=517", 
		"MouseY=367", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		"LAST");

lr_end_transaction("SiteScope-RDP-S01-04 Start SiteScope Launcher",2);

	lr_think_time(10);

	
lr_start_transaction("SiteScope-RDP-S01-05 Launch SiteScope");

	rdp_sync_on_image("StepDescription=Image Synchronization 3", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		"IMAGEDATA", 
		"ImageLeft=1343", "ImageTop=20", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_189.png", "ENDIMAGE", 
		"LAST");

	rdp_mouse_click("StepDescription=Mouse Click 1", 
		"Snapshot=snapshot_188.inf", 
		"MouseX=1363", 
		"MouseY=40", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		"LAST");

	rdp_sync_on_image("StepDescription=Image Synchronization 4",
		"WaitFor=Appear",
		"AddOffsetToInput=Default",
		"Tolerance=High",
		"IMAGEDATA",
		"ImageLeft=62",
		"ImageTop=49",
		"ImageWidth=40",
		"ImageHeight=40",
		"ImageName=snapshot_191.png",
		"ENDIMAGE",
		"LAST");

	rdp_mouse_click("StepDescription=Mouse Click 2", 
		"Snapshot=snapshot_190.inf", 
		"MouseX=82", 
		"MouseY=69", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		"LAST");

lr_end_transaction("SiteScope-RDP-S01-05 Launch SiteScope",2);

	lr_think_time(10);
	

lr_start_transaction("SiteScope-RDP-S01-06 Click on SiteScope Folder");

	rdp_sync_on_image("StepDescription=Image Synchronization 5", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		"IMAGEDATA", 
		"ImageLeft=78", "ImageTop=140", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_193.png", "ENDIMAGE", 
		"LAST");

	rdp_mouse_click("StepDescription=Mouse Click 3", 
		"Snapshot=snapshot_192.inf", 
		"MouseX=98", 
		"MouseY=160", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		"LAST");

lr_end_transaction("SiteScope-RDP-S01-06 Click on SiteScope Folder",2);

	lr_think_time(10);
	

lr_start_transaction("SiteScope-RDP-S01-07 Exit SiteScope");

	rdp_sync_on_image("StepDescription=Image Synchronization 6", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		"IMAGEDATA", 
		"ImageLeft=1352", "ImageTop=2", "ImageWidth=40", "ImageHeight=33", "ImageName=snapshot_195.png", "ENDIMAGE", 
		 
		"LAST");

	rdp_mouse_click("StepDescription=Mouse Click 4", 
		"Snapshot=snapshot_194.inf", 
		"MouseX=1372", 
		"MouseY=15", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		"LAST");

lr_end_transaction("SiteScope-RDP-S01-07 Exit SiteScope",2);

	lr_think_time(10);
	

lr_start_transaction("SiteScope-RDP-S01-08 Close ADM Folder");

	rdp_sync_on_image("StepDescription=Image Synchronization 7", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		"IMAGEDATA", 
		"ImageLeft=1239", "ImageTop=180", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_197.png", "ENDIMAGE", 
		"LAST");

	rdp_mouse_click("StepDescription=Mouse Click 5", 
		"Snapshot=snapshot_196.inf", 
		"MouseX=1259", 
		"MouseY=200", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		"LAST");

	rdp_sync_on_image("StepDescription=Image Synchronization 8", 
		"WaitFor=Appear", 
		"AddOffsetToInput=Default", 
		"IMAGEDATA", 
		"ImageLeft=1239", "ImageTop=180", "ImageWidth=40", "ImageHeight=40", "ImageName=snapshot_199.png", "ENDIMAGE", 
		"LAST");

	rdp_mouse_click("StepDescription=Mouse Click 6", 
		"Snapshot=snapshot_198.inf", 
		"MouseX=1259", 
		"MouseY=200", 
		"MouseButton=LEFT_BUTTON", 
		"Origin=Default", 
		"LAST");

lr_end_transaction("SiteScope-RDP-S01-08 Close ADM Folder",2);

	lr_think_time(10);
	

	rdp_disconnect_server("StepDescription=Server Disconnect 1", 
		"LAST");

	return 0;
}
# 5 "z:\\transfer vms\\vugen\\scripts\\rdp\\sitescope-rdp-s01 access sitescope\\\\combined_SiteScope-RDP-S01 Access SiteScope.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "z:\\transfer vms\\vugen\\scripts\\rdp\\sitescope-rdp-s01 access sitescope\\\\combined_SiteScope-RDP-S01 Access SiteScope.c" 2

