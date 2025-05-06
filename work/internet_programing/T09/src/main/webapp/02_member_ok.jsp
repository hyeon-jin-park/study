<%@ page contentType="text/html; charset=UTF-8"  %>
<!DOCTYPE html>
<%
request.setCharacterEncoding("utf-8");

String id = request.getParameter("id");
String pass = request.getParameter("pass");

if(id.equals("admin") && pass.equals("1234")){
	session.setAttribute("id", id);
	//out.println("<script>alert('로그인되었습니다.')</script>");
	response.sendRedirect("02_login.jsp");
}else if(id.equals("admin")){
	out.println("<script>alert('비밀번호가 틀렸습니다.'); histroy.back(); </script>");
}else if(pass.equals("1234")){
	out.println("<script>alert('아이디가 틀렸습니다.'); histroy.back(); </script>");
}else{
	out.println("<script>alert('아이디와 비밀번호가 틀렸습니다.'); histroy.back(); </script>");
}
%>
<html>
<head>
<meta charset="UTF-8">
<title>예외처리 페이지</title>
</head>
<body>


</body>
</html>