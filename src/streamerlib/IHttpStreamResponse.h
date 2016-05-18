


struct __declspec(novtable)  IHttpResponseStream
{
	virtual std::vector<std::pair<std::string, std::string>> GetResponseHeaders() const = 0;
};