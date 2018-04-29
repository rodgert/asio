#ifndef ASIO_EXPECTED_RESULT_HPP
#define ASIO_EXPECTED_RESULT_HPP

#if defined(XSTD_EXPERIMENTAL) && (__cplusplus >= 201402L)
#include <expected.hpp>
#endif // defined(XSTD_EXPERIMENTAL) && (__cplusplus >= 201402L)

namespace asio {
#if defined(XSTD_EXPERIMENTAL) && (__cplusplus > 201402L)
    using expected_result = xstd::expected<std::size_t, asio::error_code>;
#endif // defined(XSTD_EXPERIMENTAL) && (__cplusplus >= 201402L)

} // namespace asio
#endif // ASIO_EXPECTED_RESULT_HPP
