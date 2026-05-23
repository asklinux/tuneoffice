[![License](https://img.shields.io/badge/License-GNU%20AGPL%20V3-green.svg?style=flat)](https://www.gnu.org/licenses/agpl-3.0.en.html)

<h1 > TUNEOFFICE web-apps</h1>

## 💡 Overview

Welcome to the `web-apps` repository! 

It’s the frontend for [TUNEOFFICE Document Server](https://github.com/TUNEOFFICE/DocumentServer) and [TUNEOFFICE Desktop Editors](https://github.com/TUNEOFFICE/DesktopEditors) — the part you interact with. It powers the interface that lets you create, edit, save, and export your text documents, spreadsheets, and presentations.

*Previous versions: Until 2019-10-23 the repository was called web-apps-pro.*

---

## ⚙️ How it fits in the TUNEOFFICE ecosystem


| Layer | Component | Role |
|-----------|------------|------|
| 🧠 **Engine** | [Document Server ↗](https://github.com/TUNEOFFICE/DocumentServer) | Handles editing logic, file conversion, real-time collaboration |
| 💻 **Interface** | **Web Apps** *(this repo)* | Provides the browser-based user interface |
| 🧩 **Integrations** | [Integration API ↗](https://api.tuneoffice.com/docs/docs-api/get-started/basic-concepts/?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps) | Embeds editors into custom web platforms or apps |

Together, these layers make **TUNEOFFICE** a full-fledged online editing suite.

---

## 🚀 Key highlights

✨ **Multiple editors, one codebase**
- [Document Editor](https://www.tuneoffice.com/word-processor?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps) 📝  
- [Spreadsheet Editor](https://www.tuneoffice.com/sheets?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps) 📊  
- [Presentation Editor](https://www.tuneoffice.com/slides?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps) 📽️ 
- [PDF Editor](https://www.tuneoffice.com/pdf-editor?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps) ✂️
- [Form Creator](https://www.tuneoffice.com/form-creator?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps) 📝
- [Diagram Viewer](https://www.tuneoffice.com/diagram-viewer?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps) 🖼️

💬 **Real-time collaboration**
- Co-editing 
- Comments, mentions, and version history
- Built-in chat and track changes  

⚡ **Developer-friendly integration**
- Embed editors in any app using [TUNEOFFICE API ↗](https://api.tuneoffice.com/docs/docs-api/get-started/basic-concepts/?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps)
- Customize toolbar, permissions, and callback behavior  

🌍 **Fully browser-compatible**
- Works on all major browsers  
- Localized in 45 languages  
- Optimized for responsive performance  

---

## 🧱 Folder overview

Here’s a quick tour of what lives inside this repository:

| Folder | Description |
|--------|--------------|
| `.github/workflows/` | GitHub Action workflows for CI, build validation, testing, and checks. |
| `.vscode/` | Editor configuration for VS Code.|
| `apps/` | Core UI for the three editors (Documents, Spreadsheets, Presentations). This is where the frontend interface lives. |
| `build/` | Build scripts, bundling configuration, and output settings for packaging the web editors. |
| `test/` | Test suites and scripts used to validate functionality and stability. |
| `translation/` | All localization files and translations. |
| `vendor/` | Third-party libraries and dependencies used by the editors. |


## 🔧 Want to build this yourself? 

If you’d like to compile or modify the editors yourself, use the [`build_tools`](https://github.com/TUNEOFFICE/build_tools) repository.

It automatically sets up dependencies and builds:

* [Docs (Document Server)](https://www.tuneoffice.com/docs?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps)  
* [Desktop Editors](https://www.tuneoffice.com/desktop?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps)  
* [Document Builder](https://www.tuneoffice.com/document-builder?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps)

## Need help or have an idea? 💡

We ❤️ community contributions!

* **🐞 Found a bug?** Please report it by creating an [issue](https://github.com/TUNEOFFICE/web-apps/issues).
* **❓ Have a question?** Ask our community and developers on the [TUNEOFFICE Forum](https://community.tuneoffice.com).
* **💡 Want to suggest a feature?** Share your ideas on our [feedback platform](https://feedback.tuneoffice.com/forums/966080-your-voice-matters).
* **🧑‍💻 Need help for developers?** Check our [API documentation](https://api.tuneoffice.com/?utm_source=github&utm_medium=cpc&utm_campaign=GitHubWebApps).

---

<p align="center"> Made with ❤️ by the TUNEOFFICE Team </p>