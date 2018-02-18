#include <iostream>
#include <memory>
#include <mutex>

class Rect
{
public:
	void Set(std::int32_t width, std::int32_t height)
	{
		std::lock_guard<decltype(m_mutex)> lk(m_mutex);
		m_width = width;
		m_height = height;
	}

	std::int32_t Area() const
	{
		std::lock_guard<decltype(m_mutex)> lk(m_mutex);
		return m_width * m_height;
	}
private:
	mutable std::mutex m_mutex;
	std::int32_t m_width;
	std::int32_t m_height;
};

int main()
{
	std::auto_ptr<Rect> apr(new Rect());
	apr->Set(1, 2);
	apr->Area();

	return 0;
}