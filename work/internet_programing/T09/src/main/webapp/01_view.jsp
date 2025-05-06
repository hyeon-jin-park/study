<%@ page language="java" contentType="text/html; charset=UTF-8"  %>
<!DOCTYPE html>
<%
request.setCharacterEncoding("utf-8");
String sn1 = request.getParameter("num1");
String sn2 = request.getParameter("num2");
String sop = request.getParameter("op");

double num1 = Double.parseDouble(sn1);
double num2 = Double.parseDouble(sn2);

double result = 0;

if(sop.equals("+")){
	result = num1 + num2;
}

if(sop.equals("-")){
	result = num1 - num2;
}

if(sop.equals("*")){
	result = num1 * num2;
}

if(sop.equals("/")){
	result = num1 / num2;
}

%>

<html>
<head>
<meta charset="UTF-8">
<title>연산결과</title>
</head>
<body>

결과: <%=sn1 %><%=sop %><%=sn2 %>=<%=result %>

</body>
</html>