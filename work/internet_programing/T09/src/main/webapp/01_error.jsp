<%@ page contentType="text/html; charset=UTF-8" 
		isErrorPage="true" %>
<!DOCTYPE html>


<html>
<head>
<meta charset="UTF-8">
<title>예외처리 페이지</title>
</head>
<body>
<p>isErrorPage="true" 설정에 의한  exception 내장 객체 사용</p>
오류 메시지:
<%= exception.getMessage() %><br>
<%=exception.getClass().getName() %>

</body>
</html>