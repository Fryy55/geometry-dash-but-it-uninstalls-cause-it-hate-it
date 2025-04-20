#include <Geode/Geode.hpp>
#include <Geode/utils/terminate.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
	$override bool init() {
		if (!MenuLayer::init())
			return false;

		auto popup = createQuickPopup(
			"phantom.",
			"<cr>Do you hate it?</c>",
			"Yes.", "No.",
			[](bool yes, bool no) {
				if (yes)
					createQuickPopup(
						"phantom...",
						"<cr>UNINSTALL?</c>",
						"Yes.", "Yes.",
						[](auto, auto) {
							static_cast<void>(Mod::get() -> uninstall(true));
							utils::game::restart();
						}
					);
				if (no)
					utils::terminate("fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you fuck you");
			},
			false
		);
		popup -> m_scene = this;
		popup -> show();

		return true;
	}
};