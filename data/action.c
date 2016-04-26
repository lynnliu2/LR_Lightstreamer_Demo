Action()
{

	web_url("StockListDemo_Basic", 
		"URL=http://demos.lightstreamer.com/StockListDemo_Basic", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("create_session.js", 
		"URL=http://push.lightstreamer.com/lightstreamer/create_session.js", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/javascript", 
		"Referer=http://demos.lightstreamer.com/StockListDemo_Basic/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"Body=LS_op2=create&LS_phase=8101&LS_domain=lightstreamer.com&LS_cause=new.api&LS_polling=true&LS_polling_millis=0&LS_idle_millis=0&LS_cid=pcYgxn8m8 feOojyA1T661g3g2.pz479f9j&LS_adapter_set=DEMO&LS_container=lsc&", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=ws://push.lightstreamer.com/lightstreamer", 
		"Origin=http://demos.lightstreamer.com", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer=bind_session\r\nLS_session=Sa0ef0b3ea64989deT4929104&LS_phase=8103&LS_domain=lightstreamer.com&LS_cause=loop1&LS_container=lsc&", 
		"IsBinary=0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer=control\r\nLS_mode=MERGE&LS_id=item1%20item2%20item3%20item4%20item5%20item6%20item7%20item8%20item9%20item10&LS_schema=stock_name%20last_price%20time%20pct_change%20bid_quantity%20bid%20ask%20ask_quantity%20min%20max%20ref_price%20open_price&LS_data_adapter=QUOTE_ADAPTER&LS_snapshot=true&LS_table=1&LS_req_phase=2&LS_win_phase=1&LS_op=add&LS_session=Sa0ef0b3ea64989deT4929104&", 
		"IsBinary=0", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	/*Connection ID 0 received buffer WebSocketReceive1*/

	/*Connection ID 0 received buffer WebSocketReceive2*/

	/*Connection ID 0 received buffer WebSocketReceive3*/

	/*Connection ID 0 received buffer WebSocketReceive4*/

	/*Connection ID 0 received buffer WebSocketReceive5*/

	/*Connection ID 0 received buffer WebSocketReceive6*/

	/*Connection ID 0 received buffer WebSocketReceive7*/

	/*Connection ID 0 received buffer WebSocketReceive8*/

	/*Connection ID 0 received buffer WebSocketReceive9*/

	/*Connection ID 0 received buffer WebSocketReceive10*/

	/*Connection ID 0 received buffer WebSocketReceive11*/

	/*Connection ID 0 received buffer WebSocketReceive12*/

	/*Connection ID 0 received buffer WebSocketReceive13*/

	/*Connection ID 0 received buffer WebSocketReceive14*/

	/*Connection ID 0 received buffer WebSocketReceive15*/

	return 0;
}