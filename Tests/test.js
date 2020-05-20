function getWait() {
	top.wait.document.writeln("<HTML><HEAD><TITLE></TITLE></HEAD>");
	top.wait.document.writeln("<BODY BGCOLOR=\"#0C0C19\" onLoad=\"window.defaultStatus=\'Welcome to Softimage\'; return true\">");
	top.wait.document.writeln("</BODY></HTML>");
	top.wait.document.close();
	waitFrame = "done";
}

window.onerror = null;
var loc = location.hostname;
var rootPath = top.window.location.pathname.substring(0,top.window.location.pathname.lastIndexOf("/"));
var waitFrame = "no";
var dataFrame = "no";
var bodyFrame = "no";

if (navigator.appName == "Netscape") {
	if (navigator.userAgent.indexOf("IRIX") > 0 ) {
		if (navigator.userAgent.indexOf("lla/3.0 (") == -1
			&& navigator.userAgent.indexOf("lla/3.0Gold (") == -1
			&& navigator.userAgent.indexOf("lla/3.01 (") == -1
			&& navigator.userAgent.indexOf("lla/3.01Gold (") == -1
			&& navigator.userAgent.indexOf("lla/3.0SC-SGI (") == -1
			&& navigator.userAgent.indexOf("lla/3.0C-SGI (") == -1) {
			top.window.location.href = "http://" + loc + rootPath + "/irix.htm";
		}
	}
	if (navigator.userAgent.indexOf("Win") > 0 ) {
		if (navigator.userAgent.indexOf("lla/3.0 (") == -1
			&& navigator.userAgent.indexOf("lla/3.0Gold (") == -1
			&& navigator.userAgent.indexOf("lla/3.01 (") == -1
			&& navigator.userAgent.indexOf("lla/3.01Gold (") == -1
			&& navigator.userAgent.indexOf("lla/3.0SC-SGI (") == -1
			&& navigator.userAgent.indexOf("lla/3.0C-SGI (") == -1) {
			top.window.location.href = "http://" + loc + rootPath + "/win.htm";
		}
	}
	if (navigator.userAgent.indexOf("Macintosh") > 0 ) {
		if (navigator.userAgent.indexOf("lla/3.0 (") == -1
			&& navigator.userAgent.indexOf("lla/3.0Gold (") == -1
			&& navigator.userAgent.indexOf("lla/3.01 (") == -1
			&& navigator.userAgent.indexOf("lla/3.01Gold (") == -1
			&& navigator.userAgent.indexOf("lla/3.0SC-SGI (") == -1
			&& navigator.userAgent.indexOf("lla/3.0C-SGI (") == -1) {
			top.window.location.href = "http://" + loc + rootPath + "/mac.htm";
		}
	}
	if (rootPath == "/softimage") {
		top.window.location.href = "http://" + loc + "/Softimage/";
	}
}
if (navigator.appName == "Microsoft Internet Explorer") {
	if (navigator.userAgent.indexOf("Win") > 0 ) {
		if (navigator.userAgent.indexOf("MSIE 3.0A") == -1 && navigator.userAgent.indexOf("MSIE 3.01") == -1 ) {
			top.window.location.href = "http://" + loc + rootPath + "/win.htm";
		}
	}
}

function getData() {
	if (navigator.appName == "Netscape") {
		top.data.document.writeln("<HTML><HEAD><TITLE></TITLE></HEAD>");
		top.data.document.writeln("<BODY BGCOLOR=\"#0C0C19\" onLoad=\"window.defaultStatus=\'Welcome to Softimage\'; return true\">");
		top.data.document.writeln("<FORM NAME=\"userData\" ACTION=\"/isapi/Softimage/INITIAL.IDC\" METHOD=POST>");
		top.data.document.writeln("<INPUT TYPE=HIDDEN NAME=\"id\" VALUE=\"\">");
		top.data.document.writeln("<INPUT TYPE=HIDDEN NAME=\"browserName\" VALUE=\"\">");
		top.data.document.writeln("<INPUT TYPE=HIDDEN NAME=\"browserVersion\" VALUE=\"\">");
		top.data.document.writeln("<INPUT TYPE=HIDDEN NAME=\"userAgent\" VALUE=\"\">");
		top.data.document.writeln("<INPUT TYPE=HIDDEN NAME=\"referrer\" VALUE=\"\">");
		top.data.document.writeln("<INPUT TYPE=HIDDEN NAME=\"userName\" VALUE=\"\">");
		top.data.document.writeln("<INPUT TYPE=HIDDEN NAME=\"userPass\" VALUE=\"\">");
		top.data.document.writeln("</FORM>");
		top.data.document.writeln("</BODY></HTML>");
		top.data.document.close();
		dataFrame = "done";
	} else {
		top.data.location.href = "http://" + loc + rootPath + "/data.htm";
	}
}
function getCode() {
	if (navigator.appName == "Netscape") {
		top.code.location.href = "http://" + loc + rootPath + "/code.htm";
	} else {
		if (dataFrame == "done") {
			top.code.location.href = "http://" + loc + rootPath + "/code.htm";
		} else {
			setTimeout("getCode()",1000);
		}
	}
}

function getBody() {
	top.body.document.writeln("<HTML><HEAD><TITLE></TITLE></HEAD>");
	top.body.document.writeln("<BODY BGCOLOR=\"#0C0C19\" onLoad=\"window.defaultStatus=\'Welcome to Softimage\'; return true\">");
	top.body.document.writeln("</BODY></HTML>");
	top.body.document.close();
	bodyFrame = "done";
}
